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
        optional($._statement),
        choice('}}', '-}}', '~}}')
      ),

    comment: () => seq('{#', /[^#]*\#+([^\}#][^#]*\#+)*/, '}'),

    _statement: ($) => choice($.assignment_statement),

    assignment_statement: () => seq('set'),
  },
});
