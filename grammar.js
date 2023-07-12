module.exports = grammar({
  name: 'twig',
  extras: () => [/\s+/],
  word: ($) => $.identifier,
  supertypes: ($) => [$.expression, $.primary_expression, $.pattern],
  inline: ($) => [$._call_signature, $._formal_parameter, $._lhs_expression],
  precedences: ($) => [
    [
      'member',
      'filter',
      'call',
      'unary',
      'ternary',
      $.expression,
      $.arrow_function,
    ],
    [$.primary_expression, $.filter_expression],
  ],
  conflicts: ($) => [
    [$.primary_expression, $._property_name],
    [$.primary_expression, $._property_name, $.arrow_function],
    [$.primary_expression, $.arrow_function],
    [$.primary_expression, $.pattern],
  ],
  rules: {
    template: ($) => repeat($._source_element),

    _source_element: ($) =>
      choice($._statement_directive, $.output_directive, $.comment, $.content),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    output_directive: ($) =>
      seq(choice('{{', '{{-', '{{~'), $.expression, choice('}}', '-}}', '~}}')),

    comment: () => seq('{#', /[^#]*\#+([^\}#][^#]*\#+)*/, '}'),

    _open_directive_token: () => choice('{%', '{%-', '{%~'),
    _close_directive_token: () => choice('%}', '-%}', '~%}'),

    _statement_directive: ($) =>
      seq(
        $._open_directive_token,
        optional($._statement),
        $._close_directive_token,
      ),

    expression: ($) =>
      choice(
        $.primary_expression,
        $.unary_expression,
        $.binary_expression,
        $.ternary_expression,
      ),

    primary_expression: ($) =>
      choice(
        $.subscript_expression,
        $.member_expression,
        $.filter_expression,
        $.parenthesized_expression,
        $.identifier,
        $.null,
        $.number,
        $.boolean,
        $.string,
        $.interpolated_string,
        $.array,
        $.object,
        $.arrow_function,
        $.call_expression,
      ),

    parenthesized_expression: ($) => seq('(', $.expression, ')'),

    identifier: () => /[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*/,
    null: () => choice('null', 'none'),
    number: () => /[0-9]+(?:\.[0-9]+)?([Ee][\+\-][0-9]+)?/,
    boolean: () => choice('true', 'false'),
    string: () => /"([^#"\\]*(?:\\.[^#"\\]*)*)"|'([^'\\]*(?:\\.[^'\\]*)*)'/,
    interpolated_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            '\\"',
            '\\#',
            '\\\\',
            /[^#"\\\\]+/,
            seq('#{', $.expression, '}'),
          ),
        ),
        '"',
      ),
    array: ($) => seq('[', commaSep($.expression), ']'),
    object: ($) =>
      seq('{', commaSep(choice($.pair, alias($.identifier, $.string))), '}'),

    pair: ($) =>
      seq(field('key', $._property_name), ':', field('value', $.expression)),

    _property_name: ($) =>
      choice(
        $.string,
        $.number,
        alias($.identifier, $.string),
        $.computed_property_name,
      ),

    computed_property_name: ($) => seq('(', $.expression, ')'),

    arrow_function: ($) =>
      seq(
        choice(field('parameter', $.identifier), $._call_signature),
        '=>',
        field('body', $.expression),
      ),

    _call_signature: ($) => field('parameters', $.formal_parameters),
    _formal_parameter: ($) => $.pattern,

    formal_parameters: ($) =>
      seq('(', optional(seq(commaSep1($._formal_parameter))), ')'),

    pattern: ($) => prec.dynamic(-1, $._lhs_expression),

    _lhs_expression: ($) =>
      choice($.member_expression, $.subscript_expression, $.identifier),

    member_expression: ($) =>
      prec(
        'member',
        seq(
          field('object', choice($.expression, $.primary_expression)),
          '.',
          field('property', alias($.identifier, $.property_identifier)),
        ),
      ),

    subscript_expression: ($) =>
      prec.right(
        'member',
        seq(
          field('object', choice($.expression, $.primary_expression)),
          '[',
          field('index', $.expression),
          ']',
        ),
      ),

    call_expression: ($) =>
      choice(
        prec(
          'call',
          seq(field('function', $.expression), field('arguments', $.arguments)),
        ),
        prec(
          'member',
          seq(
            field('function', $.primary_expression),
            field('arguments', $.arguments),
          ),
        ),
      ),

    arguments: ($) =>
      seq(
        '(',
        commaSep(seq(optional(seq($.identifier, '=')), $.expression)),
        ')',
      ),

    unary_expression: ($) =>
      prec.left(
        'unary',
        choice(
          ...[
            ['+', 500],
            ['-', 500],
            ['not', 50],
          ].map(([operator, precedence]) =>
            prec.left(
              precedence,
              seq(field('operator', operator), field('argument', $.expression)),
            ),
          ),
        ),
      ),

    binary_expression: ($) =>
      choice(
        ...[
          ['or', 10],
          ['and', 15],
          ['b-or', 16],
          ['b-xor', 17],
          ['b-and', 18],
          ['==', 20],
          ['!=', 20],
          ['<=>', 20],
          ['<', 20],
          ['>', 20],
          ['>=', 20],
          ['<=', 20],
          ['not in', 20],
          ['in', 20],
          ['matches', 20],
          ['starts with', 20],
          ['ends with', 20],
          ['has some', 20],
          ['has every', 20],
          ['..', 25],
          ['+', 30],
          ['-', 30],
          ['~', 40],
          ['*', 60],
          ['/', 60],
          ['//', 60],
          ['%', 60],
          ['is', 100],
          ['is not', 100],
          ['**', 200, 'right'],
          ['??', 300, 'right'],
        ].map(([operator, precedence, associativity = 'left']) =>
          prec[associativity](
            precedence,
            seq(
              field('left', $.expression),
              field('operator', operator),
              field('right', $.expression),
            ),
          ),
        ),
      ),

    ternary_expression: ($) =>
      prec.right(
        'ternary',
        seq(
          field('condition', $.expression),
          choice('?', '?:'),
          field('consequence', $.expression),
          optional(seq(':', field('alternative', $.expression))),
        ),
      ),

    filter_expression: ($) =>
      prec.right(
        'filter',
        seq(
          field('object', choice($.expression, $.primary_expression)),
          '|',
          field(
            'filter',
            seq($.identifier, optional(field('arguments', $.arguments))),
          ),
        ),
      ),

    tag_statement: ($) =>
      seq(alias($.identifier, $.tag), repeat(prec.left($.expression))),

    set_statement: ($) =>
      seq(
        'set',
        commaSep1(field('variable', $.identifier)),
        '=',
        commaSep1(field('value', $.expression)),
      ),

    set_block_statement: ($) =>
      seq(
        'set',
        field('variable', $.identifier),
        $._close_directive_token,
        field('value', repeat($._source_element)),
        $._open_directive_token,
        'endset',
      ),

    apply_statement: ($) =>
      seq(
        'apply',
        field('filter', choice($.identifier, $.filter_expression)),
        $._close_directive_token,
        field('body', repeat($._source_element)),
        $._open_directive_token,
        'endapply',
      ),

    autoescape_statement: ($) =>
      seq(
        'autoescape',
        optional(field('strategy', choice($.string, $.boolean))),
        $._close_directive_token,
        field('body', repeat($._source_element)),
        $._open_directive_token,
        'endautoescape',
      ),

    block_statement: ($) =>
      seq(
        'block',
        field('name', $.identifier),
        choice(
          field('body', $.expression),
          seq(
            $._close_directive_token,
            field('body', repeat($._source_element)),
            $._open_directive_token,
            'endblock',
            optional(field('name', $.identifier)),
          ),
        ),
      ),

    cache_statement: ($) =>
      seq(
        'cache',
        field('key', $.expression),
        ' ',
        optional(field('expiration', $.call_expression)),
        $._close_directive_token,
        field('body', repeat($._source_element)),
        $._open_directive_token,
        'endcache',
      ),

    deprecated_statement: ($) => seq('deprecated', field('expr', $.expression)),
    do_statement: ($) => seq('do', field('expr', $.expression)),

    embed_statement: ($) =>
      seq(
        'embed',
        field('name', $.expression),
        optional(field('ignore_missing', 'ignore missing')),
        optional(seq('with', field('variables', $.expression))),
        optional(field('only', 'only')),
        $._close_directive_token,
        field('body', repeat($._source_element)),
        $._open_directive_token,
        'endembed',
      ),

    extends_statement: ($) => seq('extends', field('expr', $.expression)),
    flush_statement: ($) => 'flush',

    for_statement: ($) =>
      seq(
        'for',
        commaSep1(field('variable', $.identifier)),
        'in',
        field('expr', $.expression),
        $._close_directive_token,
        field('body', repeat($._source_element)),
        optional(seq(
          $._open_directive_token,
          'else',
          $._close_directive_token,
          field('alternate', repeat($._source_element)),
        )),
        $._open_directive_token,
        'endfor',
      ),

    _statement: ($) =>
      choice(
        $.tag_statement,
        $.set_statement,
        $.set_block_statement,
        $.apply_statement,
        $.autoescape_statement,
        $.block_statement,
        $.cache_statement,
        $.deprecated_statement,
        $.do_statement,
        $.embed_statement,
        $.extends_statement,
        $.flush_statement,
        $.for_statement,
      ),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
