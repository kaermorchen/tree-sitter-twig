module.exports = grammar({
  name: 'twig',
  extras: () => [/\s+/],
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
  externals: ($) => [$.comment],
  rules: {
    template: ($) => repeat($._source_element),

    _source_element: ($) =>
      choice($._statement, $.output_directive, $.comment, $.content),

    source_elements: ($) => prec.left(repeat1($._source_element)),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    output_directive: ($) =>
      seq(choice('{{', '{{-', '{{~'), $.expression, choice('}}', '-}}', '~}}')),

    _open_directive_token: () => choice('{%', '{%-', '{%~'),
    _close_directive_token: () => choice('%}', '-%}', '~%}'),

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

    identifier: ($) =>
      choice(
        'divisible by',
        'same as',
        /[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*/,
      ),

    null: () => choice('null', 'none'),
    number: () => /[0-9]+(?:\.[0-9]+)?([Ee][\+\-][0-9]+)?/,
    boolean: () => choice('true', 'false'),
    string: () => /"([^#"\\]*(?:\\.[^#"\\]*)*)"|'([^'\\]*(?:\\.[^'\\]*)*)'/,
    interpolated_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            alias(choice('\\"', '\\#', '\\\\', /[^#"\\\\]+/), $.string),
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
        field('expr', $.expression),
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
          choice(
            seq(
              '?',
              field('consequence', $.expression),
              optional(seq(':', field('alternative', $.expression))),
            ),
            seq('?:', field('alternative', $.expression)),
          ),
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
      statement($, alias($.identifier, $.tag), repeat(prec.left($.expression))),

    set_statement: ($) =>
      statement(
        $,
        'set',
        commaSep1(field('variable', $.identifier)),
        '=',
        commaSep1(field('value', $.expression)),
      ),

    set_block_statement: ($) =>
      statement(
        $,
        'set',
        field('variable', $.identifier),
        source_elements($),
        'endset',
      ),

    apply_statement: ($) =>
      statement(
        $,
        'apply',
        field('filter', choice($.identifier, $.filter_expression)),
        source_elements($),
        'endapply',
      ),

    autoescape_statement: ($) =>
      statement(
        $,
        'autoescape',
        optional(field('strategy', choice($.string, $.boolean))),
        source_elements($),
        'endautoescape',
      ),

    block_statement: ($) =>
      statement(
        $,
        'block',
        field('name', $.identifier),
        choice(
          field('expr', $.expression),
          seq(
            source_elements($),
            'endblock',
            optional(field('name', $.identifier)),
          ),
        ),
      ),

    cache_statement: ($) =>
      statement(
        $,
        'cache',
        field('key', $.expression),
        ' ',
        optional(field('expiration', $.call_expression)),
        source_elements($),
        'endcache',
      ),

    deprecated_statement: ($) =>
      statement($, 'deprecated', field('expr', $.expression)),

    do_statement: ($) => statement($, 'do', field('expr', $.expression)),

    embed_statement: ($) =>
      statement(
        $,
        'embed',
        field('name', $.expression),
        optional(field('ignore_missing', 'ignore missing')),
        optional(seq('with', field('variables', $.expression))),
        optional(field('only', 'only')),
        source_elements($),
        'endembed',
      ),

    extends_statement: ($) =>
      statement($, 'extends', field('expr', $.expression)),
    flush_statement: ($) => statement($, 'flush'),

    for_statement: ($) =>
      statement(
        $,
        'for',
        commaSep1(field('variable', $.identifier)),
        'in',
        field('expr', $.expression),
        source_elements($),
        optional(seq('else', source_elements($))),
        'endfor',
      ),

    from_statement: ($) =>
      statement(
        $,
        'from',
        field('expr', $.expression),
        'import',
        commaSep1(field('variable', choice($.identifier, $.as_operator))),
      ),

    as_operator: ($) =>
      seq(
        field('left', $.identifier),
        field('operator', 'as'),
        field('right', $.identifier),
      ),

    if_statement: ($) =>
      statement(
        $,
        'if',
        field('expr', $.expression),
        source_elements($, 'then'),
        optional(field('elseif', repeat($.elseif))),
        optional(seq('else', source_elements($, 'else'))),
        'endif',
      ),

    elseif: ($) =>
      seq('elseif', field('expr', $.expression), source_elements($, 'then')),

    import_statement: ($) =>
      statement(
        $,
        'import',
        field('expr', $.expression),
        'as',
        field('variable', $.identifier),
      ),

    include_statement: ($) =>
      statement(
        $,
        'include',
        field('expr', $.expression),
        optional(field('ignore_missing', 'ignore missing')),
        optional(seq('with', field('variables', $.expression))),
        optional(field('only', 'only')),
      ),

    macro_statement: ($) =>
      statement(
        $,
        'macro',
        field('name', $.identifier),
        field('arguments', $.arguments),
        source_elements($),
        'endmacro',
        optional($.identifier),
      ),

    sandbox_statement: ($) =>
      statement($, 'sandbox', source_elements($), 'endsandbox'),

    use_statement: ($) =>
      statement(
        $,
        'use',
        field('expr', $.expression),
        optional(seq('with', commaSep1(field('variable', $.as_operator)))),
      ),

    verbatim_statement: ($) =>
      statement($, 'verbatim', source_elements($), 'endverbatim'),

    with_statement: ($) =>
      statement(
        $,
        'with',
        optional(field('expr', $.expression)),
        optional(field('only', 'only')),
        source_elements($),
        'endwith',
      ),

    _statement: ($) =>
      choice(
        $.tag_statement,
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
        $.from_statement,
        $.if_statement,
        $.import_statement,
        $.include_statement,
        $.macro_statement,
        $.sandbox_statement,
        $.set_statement,
        $.set_block_statement,
        $.use_statement,
        $.verbatim_statement,
        $.with_statement,
      ),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function source_elements($, fieldName = 'body') {
  return seq(
    $._close_directive_token,
    optional(field(fieldName, $.source_elements)),
    $._open_directive_token,
  );
}

function statement($, ...args) {
  return seq($._open_directive_token, ...args, $._close_directive_token);
}
