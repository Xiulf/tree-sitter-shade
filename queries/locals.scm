(type) @local.scope
(func) @local.scope
(class) @local.scope
(member) @local.scope
(expr_do) @local.scope
(expr_lambda) @local.scope
(case_arm) @local.scope

((pat_identifier) @local.definition
  (#match? @local.definition "^[^A-Z]"))
((path last: (identifier) @local.reference)
  (#match? @local.reference "^[^A-Z]"))
((ty_path last: (identifier) @local.reference)
  (#match? @local.reference "^[^A-Z]"))
