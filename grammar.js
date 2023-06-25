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
    array_literal: ($) => seq('[', commaSep(optional($._expression)), ']'),
    object_literal: ($) => seq('{', commaSep(optional($.property)), '}'),

    property: ($) =>
      choice(seq($.property_name, ':', $._expression), $.identifier),

    property_name: ($) =>
      choice(
        $.identifier,
        $.string_literal,
        $.number_literal,
        seq('(', $.identifier, ')')
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

    _expression: ($) => choice($.identifier, $._literal, $.interpolated_string),

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
