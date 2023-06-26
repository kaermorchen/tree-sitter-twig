module.exports = grammar({
  name: 'twig',
  extras: () => [/\s+/],
  rules: {
    template: ($) =>
      repeat(
        choice($.statement_directive, $.output_directive, $.comment, $.content)
      ),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    statement_directive: ($) =>
      seq(
        choice('{%', '{%-', '{%~'),
        optional($._statement),
        choice('%}', '-%}', '~%}')
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
        seq('(', $.identifier, ')')
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

    _statement: ($) => choice($.assignment_statement),

    assignment_statement: ($) =>
      seq(
        'set',
        field('variable', $.identifier),
        repeat(seq(',', field('variable', $.identifier))),
        optional(
          seq(
            '=',
            field('value', $._expression),
            repeat(seq(',', field('value', $._expression)))
          )
        )
      ),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
