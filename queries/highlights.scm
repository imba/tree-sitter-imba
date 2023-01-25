; ; Special identifiers
; ;--------------------

([
    (identifier)
    (shorthand_property_identifier)
    (shorthand_property_identifier_pattern)
 ] @constant
 (#match? @constant "^[A-Z_][A-Z\\d_]+$"))


((identifier) @constructor
 (#match? @constructor "^[A-Z]"))

((identifier) @variable.builtin
 (#match? @variable.builtin "^(arguments|global|module|console|window|document|self|imba|\\$\\d+)$")
 (#is-not? local))

(private_property_identifier) @variable.builtin

; ((identifier) @function.builtin
;  (#eq? @function.builtin "require")
;  (#is-not? local))

; ; Function and method definitions
; ;--------------------------------

(function_declaration
  name: (identifier) @function)
(method_definition
  name: (property_identifier) @function.method)


(pair
	key: (property_identifier) @function.method
	value: [(arrow_function) (function_declaration)]
)

(assignment_expression
  left: (identifier) @function.method
  right: [(function_declaration) (arrow_function)]
)
  
(variable_declarator
  name: (identifier) @function
  value: [(function_declaration) (arrow_function)])


; ; Function and method calls
; ;--------------------------

; (call_expression
;   function: (identifier) @function)

; (call_expression
;   function: (member_expression
;     property: (property_identifier) @function.method))

; ; Variables
; ;----------

(identifier) @variable

; ; Properties
; ;-----------

(property_identifier) @variable.other.member
(shorthand_property_identifier) @variable.other.member
(shorthand_property_identifier_pattern) @variable.other.member

; ; Literals
; ;---------

(this) @variable.builtin
(super) @variable.builtin

[
  (yes)
  (no)
  (true)
  (false)
  (null)
  (undefined)
] @constant.builtin

(comment) @comment

[
  (string)
;   (template_string)
] @string

; (regex) @string.regexp
(number) @constant.numeric.integer

; ; Tokens
; ;-------

; (template_substitution
;   "${" @punctuation.special
;   "}" @punctuation.special) @embedded

; [
;   ";"
;   ".."
;   "."
;   ","
; ] @punctuation.delimiter

[
  ; "-"
  ; "--"
  "-="
  ; "+"
  ; "++"
  "+="
  ; "*"
  "*="
  ; "**"
  "**="
  ; "/"
  "/="
  ; "%"
  "%="
  "<"
  ; "<="
  ; "<<"
  ; "<<="
  "="
  ; "=="
  ; "==="
  ; "!"
  ; "!="
  ; "!=="
  ; "=>"
  ; ">"
  ; ">="
  ; ">>"
  ; ">>="
  ; ">>>"
  ; ">>>="
  ; "~"
  ; "^"
  ; "&"
  ; "|"
  ; "^="
  ; "&="
  ; "|="
  ; "&&"
  ; "||"
  ; "??"
  "&&="
  "||="
  "??="
  "..."
] @operator

; (ternary_expression ["?" ":"] @operator)

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

[
;   "as"
;   "async"
  ; "debugger"
;   "delete"
;   "extends"
  "from"
  "def"
  "get"
  "do"
  "set"
  "prop"
;   "in"
;   "instanceof"
;   "new"
;   "of"
;   "set"
  "static"
;   "target"
;   "try"
;   "typeof"
;   "void"
;   "with"
] @keyword

[
  "class"
  "let"
  "const"
  "var"
] @keyword.storage.type

[
;   "switch"
;   "case"
;   "default"
  "if"
  "unless"
  ; "else"
;   "yield"
;   "throw"
;   "finally"
  "return"
;   "catch"
  ; "continue"
;   "while"
;   "break"
;   "for"
  ; "do"
;   "await"
] @keyword.control

[
  "import"
  "export"
] @keyword.control.import 

