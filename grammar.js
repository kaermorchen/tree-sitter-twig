module.exports = grammar({
  name: 'twig',
  extras: () => [/\s+/],

  precedences: ($) => [['member']],

  rules: {
    template: ($) => repeat($._source_element),

    _source_element: ($) =>
      choice(
        /* $._statement_directive, */ $.output_directive,
        $.comment,
        $.content,
      ),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    output_directive: ($) =>
      seq(choice('{{', '{{-', '{{~'), $.expression, choice('}}', '-}}', '~}}')),

    comment: () => seq('{#', /[^#]*\#+([^\}#][^#]*\#+)*/, '}'),

    expression: ($) =>
      choice(
        $.primary_expression,
        // $.filter_expression,
        // $.unary_expression,
        // $.binary_expression,
        // $.ternary_expression
      ),

    primary_expression: ($) =>
      choice(
        // $.subscript_expression,
        // $.member_expression,
        // $._parenthesized_expression,
        $.identifier,
        // $._literal,
        // $.interpolated_string,
        // $.arrow_function
      ),

    // _open_directive_token: () => choice('{%', '{%-', '{%~'),
    // _close_directive_token: () => choice('%}', '-%}', '~%}'),

    // _statement_directive: ($) =>
    //   seq(
    //     $._open_directive_token,
    //     optional($._statement),
    //     $._close_directive_token
    //   ),

    identifier: () => /[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*/,

    // _literal: ($) =>
    //   choice(
    //     $.null_literal,
    //     $.number_literal,
    //     $.boolean_literal,
    //     $.string_literal,
    //     $.array_literal,
    //     $.object_literal
    //   ),

    // null_literal: () => /null|none/i,
    // number_literal: () => /[0-9]+(?:\.[0-9]+)?([Ee][\+\-][0-9]+)?/,
    // boolean_literal: () => /true|false/i,
    // string_literal: () =>
    //   /"([^#"\\]*(?:\\.[^#"\\]*)*)"|'([^'\\]*(?:\\.[^'\\]*)*)'/,
    // array_literal: ($) => seq('[', commaSep($._expression), ']'),
    // object_literal: ($) => seq('{', commaSep($.property), '}'),

    // property: ($) =>
    //   choice(seq($.property_name, ':', $._expression), $.identifier),

    // property_name: ($) =>
    //   choice(
    //     $.identifier,
    //     $.string_literal,
    //     $.number_literal,
    //     seq('(', $._expression, ')')
    //   ),

    // arrow_function: ($) =>
    //   seq(
    //     choice(field('parameter', $.identifier), $._call_signature),
    //     '=>',
    //     field('body', $._expression)
    //   ),

    // _call_signature: ($) => field('parameters', $.formal_parameters),
    // _formal_parameter: ($) => choice($.pattern, $.assignment_pattern),

    // formal_parameters: ($) =>
    //   seq('(', optional(seq(commaSep1($._formal_parameter))), ')'),

    // interpolated_string: ($) =>
    //   seq(
    //     '"',
    //     repeat(
    //       choice(
    //         '\\"',
    //         '\\#',
    //         '\\\\',
    //         /[^#"\\\\]+/,
    //         seq('#{', $._expression, '}')
    //       )
    //     ),
    //     '"'
    //   ),

    // member_expression: ($) =>
    //   prec(
    //     'member',
    //     seq(
    //       field('object', choice($._expression, $._primary_expression)),
    //       '.',
    //       field('property', alias($.identifier, $.property_identifier))
    //     )
    //   ),

    // subscript_expression: ($) =>
    //   prec.right(
    //     'member',
    //     seq(
    //       field('object', choice($._expression, $._primary_expression)),
    //       '[',
    //       field('index', $._expression),
    //       ']'
    //     )
    //   ),

    // filter_expression: ($) =>
    //   prec.left(
    //     seq(
    //       $.member_expression,
    //       optional(seq('|', $.identifier, optional($.arguments)))
    //     )
    //   ),

    // _parenthesized_expression: ($) => seq('(', $._expression, ')'),

    // unary_expression: ($) =>
    //   choice(
    //     ...[
    //       ['+', 500],
    //       ['-', 500],
    //       ['not', 50],
    //     ].map(([operator, precedence]) =>
    //       prec.left(
    //         precedence,
    //         seq(field('operator', operator), field('operand', $._expression))
    //       )
    //     )
    //   ),

    // binary_expression: ($) =>
    //   choice(
    //     ...[
    //       ['or', 10],
    //       ['and', 15],
    //       ['b-or', 16],
    //       ['b-xor', 17],
    //       ['b-and', 18],
    //       ['==', 20],
    //       ['!=', 20],
    //       ['<=>', 20],
    //       ['<', 20],
    //       ['>', 20],
    //       ['>=', 20],
    //       ['<=', 20],
    //       ['not in', 20],
    //       ['in', 20],
    //       ['matches', 20],
    //       ['starts with', 20],
    //       ['ends with', 20],
    //       ['has some', 20],
    //       ['has every', 20],
    //       ['..', 25],
    //       ['+', 30],
    //       ['-', 30],
    //       ['~', 40],
    //       ['*', 60],
    //       ['/', 60],
    //       ['//', 60],
    //       ['%', 60],
    //       ['is', 100],
    //       ['is not', 100],
    //       ['**', 200, 'right'],
    //       ['??', 300, 'right'],
    //     ].map(([operator, precedence, associativity]) =>
    //       (associativity === 'right' ? prec.right : prec.left)(
    //         precedence,
    //         seq(
    //           field('left', $._expression),
    //           field('operator', operator),
    //           field('right', $._expression)
    //         )
    //       )
    //     )
    //   ),

    // ternary_expression: ($) =>
    //   prec.left(
    //     seq(
    //       $._expression,
    //       choice('?', '?:'),
    //       $._expression,
    //       optional(seq(':', $._expression))
    //     )
    //   ),

    // call_expression: ($) => seq($.identifier, $.arguments),

    // arguments: ($) =>
    //   seq(
    //     '(',
    //     commaSep(seq(optional(seq($.identifier, '=')), $._expression)),
    //     ')'
    //   ),

    // tag_statement: ($) =>
    //   seq(alias($.identifier, $.tag), repeat(prec.left($._expression))),

    // set_inline_statement: ($) =>
    //   seq(
    //     'set',
    //     field('variable', $.identifier),
    //     repeat(seq(',', field('variable', $.identifier))),
    //     '=',
    //     field('value', $._expression),
    //     repeat(seq(',', field('value', $._expression)))
    //   ),

    // set_block_statement: ($) =>
    //   seq(
    //     'set',
    //     field('variable', $.identifier),
    //     $._close_directive_token,
    //     field('value', repeat($._source_element)),
    //     $._open_directive_token,
    //     'endset'
    //   ),

    // apply_statement: ($) =>
    //   seq(
    //     'apply',
    //     // field('filter', seq($.identifier, optional(repeat($.filter)))),
    //     $._close_directive_token,
    //     field('value', repeat($._source_element)),
    //     $._open_directive_token,
    //     'endapply'
    //   ),

    // autoescape_statement: ($) =>
    //   seq(
    //     'autoescape',
    //     optional(
    //       field('strategy', choice($.string_literal, $.boolean_literal))
    //     ),
    //     $._close_directive_token,
    //     field('value', repeat($._source_element)),
    //     $._open_directive_token,
    //     'endautoescape'
    //   ),

    // block_statement: ($) =>
    //   seq(
    //     'block',
    //     field('name', $.identifier),
    //     choice(
    //       field('body', $._expression),
    //       seq(
    //         $._close_directive_token,
    //         field('body', repeat($._source_element)),
    //         $._open_directive_token,
    //         'endblock',
    //         optional($.identifier)
    //       )
    //     )
    //   ),

    // cache_statement: ($) =>
    //   seq(
    //     'cache',
    //     field('key', $._expression),
    //     ' ',
    //     optional(field('expiration', $._expression)),
    //     $._close_directive_token,
    //     field('body', repeat($._source_element)),
    //     $._open_directive_token,
    //     'endcache'
    //   ),

    // _statement: ($) =>
    //   choice(
    //     $.tag_statement,
    //     $.set_inline_statement,
    //     $.set_block_statement,
    //     $.apply_statement,
    //     $.autoescape_statement,
    //     $.block_statement,
    //     $.cache_statement
    //   ),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
