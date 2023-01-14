module.exports = grammar!

	name: "imba"

	rules:

		source_file: do
			repeat($1._definition)

		_definition: do
			choice(
				$1.tag
			)

		tag: do
			seq(
				$1.tag_open
				$1._tag_content
				$1.tag_close
			)

		tag_open: do
			"<"

		_tag_content: do
			seq(
				$1.tag_identifier
				repeat($1._tag_inline_style)
			)

		_tag_inline_style: do
			seq(
				$1.inline_style_open
				repeat($1.inline_style_prop)
				$1.inline_style_close
			)

		tag_close: do
			">"

		tag_identifier: do
			token(seq(/[a-z]+/, repeat(optional(seq("-", /[a-z]+/)))))

		inline_style_open: do
			"["

		inline_style_close: do
			"]"

		inline_style_prop: do
			token(seq(/[a-z,@]+/, /:\s*/, /[a-z,#,0-9]+/))

		keyword: do
			choice('const')
