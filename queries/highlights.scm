(func name: (identifier) @function)
(type name: (identifier) @type)
(class name: (identifier) @type)
(ctor name: (identifier) @constructor)
(typevar (identifier) @variable)
(pat_identifier) @variable.parameter

(expr_app first: (path last: (identifier) @function))

((ty_path last: (identifier) @type)
  (#match? @type "^[A-Z]"))
((ty_path last: (identifier) @identifier)
  (#match? @identifier "^[_a-z]"))

(attribute) @attribute
(operator) @operator
(symbol) @operator
(comment) @comment
(identifier) @identifier

"module" @keyword
"import" @keyword
"prefix" @keyword
"infix" @keyword
"infixl" @keyword
"infixr" @keyword
"postfix" @keyword
"as" @keyword
"foreign" @keyword
"type" @keyword
"fn" @keyword
"class" @keyword
"member" @keyword
"where" @keyword
"of" @keyword
"do" @keyword
"let" @keyword
"if" @keyword
"then" @keyword
"else" @keyword
"case" @keyword
(recur) @function.builtin

(int_literal) @constant.builtin
(string_literal) @string
