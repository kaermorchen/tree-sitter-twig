module.exports = grammar({
  name: 'twig',
  extras: () => [/\s+/],
  rules: {
    template: ($) => repeat($._source_element),

    _source_element: ($) =>
      choice($._statement_directive, $.output_directive, $.comment, $.content),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    _open_directive_token: () => choice('{%', '{%-', '{%~'),
    _close_directive_token: () => choice('%}', '-%}', '~%}'),

    _statement_directive: ($) =>
      seq(
        $._open_directive_token,
        optional($._statement),
        $._close_directive_token
      ),

    output_directive: ($) =>
      seq(
        choice('{{', '{{-', '{{~'),
        optional($._expression),
        choice('}}', '-}}', '~}}')
      ),

    comment: () => seq('{#', /[^#]*\#+([^\}#][^#]*\#+)*/, '}'),

    identifier: () => /[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*/,

    _literal: ($) =>
      choice(
        $.null_literal,
        $.number_literal,
        $.boolean_literal,
        $.string_literal,
        $.array_literal,
        $.object_literal
      ),

    null_literal: () => /null|none/i,
    number_literal: () => /[0-9]+(?:\.[0-9]+)?([Ee][\+\-][0-9]+)?/,
    boolean_literal: () => /true|false/i,
    string_literal: () =>
      /"([^#"\\]*(?:\\.[^#"\\]*)*)"|'([^'\\]*(?:\\.[^'\\]*)*)'/,
    array_literal: ($) => seq('[', commaSep($._expression), ']'),
    object_literal: ($) => seq('{', commaSep($.property), '}'),

    property: ($) =>
      choice(seq($.property_name, ':', $._expression), $.identifier),

    property_name: ($) =>
      choice(
        $.identifier,
        $.string_literal,
        $.number_literal,
        seq('(', $._expression, ')')
      ),

    arrow_function: ($) =>
      prec(
        1,
        seq(
          choice($.identifier, seq('(', commaSep($.identifier), ')')),
          '=>',
          $._expression
        )
      ),

    interpolated_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            '\\"',
            '\\#',
            '\\\\',
            /[^#"\\\\]+/,
            seq('#{', $._expression, '}')
          )
        ),
        '"'
      ),

    _expression: ($) =>
      prec.right(
        seq(
          choice(
            $.identifier,
            $._literal,
            $.interpolated_string,
            $.arrow_function,
            $._parenthesized_expression,
            $.member_expression,
            $.subscript_expression,
            $.unary_expression,
            $.binary_expression,
            $.ternary_expression,
            $.call_expression
          ),
          repeat($.filter)
        )
      ),

    _parenthesized_expression: ($) => seq('(', $._expression, ')'),

    member_expression: ($) =>
      seq(field('object', $._expression), '.', field('property', $.identifier)),

    subscript_expression: ($) =>
      seq(
        field('object', $._expression),
        '[',
        field('index', $._expression),
        ']'
      ),

    unary_expression: ($) =>
      prec.left(
        3,
        seq(
          field('operator', choice('+', '-', 'not')),
          field('operand', $._expression)
        )
      ),

    binary_expression: ($) =>
      prec.right(
        2,
        seq(
          $._expression,
          choice(
            'or',
            'and',
            'b-or',
            'b-xor',
            'b-and',
            '==',
            '!=',
            '<=>',
            '<',
            '>',
            '>=',
            '<=',
            'not in',
            'in',
            'matches',
            'starts with',
            'ends with',
            'has some',
            'has every',
            '..',
            '+',
            '-',
            '~',
            '*',
            '/',
            '//',
            '%',
            'is',
            'is not',
            '**',
            '??'
          ),
          $._expression
        )
      ),

    ternary_expression: ($) =>
      prec.left(
        seq(
          $._expression,
          choice('?', '?:'),
          $._expression,
          optional(seq(':', $._expression))
        )
      ),

    filter: ($) => prec.left(seq('|', $.identifier, optional($.arguments))),

    call_expression: ($) => seq($.identifier, $.arguments),

    arguments: ($) =>
      seq(
        '(',
        commaSep(seq(optional(seq($.identifier, '=')), $._expression)),
        ')'
      ),

    tag_statement: ($) =>
      seq(alias($.identifier, $.tag), repeat(prec.left($._expression))),

    set_inline_statement: ($) =>
      seq(
        'set',
        field('variable', $.identifier),
        repeat(seq(',', field('variable', $.identifier))),
        '=',
        field('value', $._expression),
        repeat(seq(',', field('value', $._expression)))
      ),

    set_block_statement: ($) =>
      seq(
        'set',
        field('variable', $.identifier),
        $._close_directive_token,
        field('value', repeat($._source_element)),
        $._open_directive_token,
        'endset'
      ),

    apply_statement: ($) =>
      seq(
        'apply',
        field('filter', seq($.identifier, optional(repeat($.filter)))),
        $._close_directive_token,
        field('value', repeat($._source_element)),
        $._open_directive_token,
        'endapply'
      ),

    _statement: ($) =>
      choice(
        $.tag_statement,
        $.set_inline_statement,
        $.set_block_statement,
        $.apply_statement
      ),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
