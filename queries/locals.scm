; Scopes
;-------

[
  (statement_block)
  (arrow_function)
  (function_declaration)
  (method_definition)
] @local.scope

; Definitions
;------------

(pattern/identifier)@local.definition

(variable_declarator
  name: (identifier) @local.definition)

; References
;------------

(identifier) @local.reference
