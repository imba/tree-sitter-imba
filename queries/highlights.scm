(comment) @comment.line

[
  "if" 
  "unless"  
  "class"
  "export"
  "static"
] @keyword

[
  "<"
] @operator

(identifier) @variable

; (continue_statement) @keyword

; Literals

[
  (null)
  (true)
  (yes)
  (no)
  (false)
  (undefined)
  (super)
  (import)
] @constant.builtin
