#pragma once

#include <vector>
#include "jsonable.h"
#include <assert.h>
#include "entity.h"
#include "named.h"
#include "expr.h"
#include "function.h"
#include "variable.h"
#include "statement.h"

class aPackage: public Named {
public:
	std::vector<Entity*> components;
	std::vector<Function*> function_headers;
	std::vector<Function*> functions;
	std::vector<Variable*> subtype_headers;
	std::vector<Variable*> signals;
	std::vector<Variable*> constants;
	std::vector<Variable*> variables;

	aPackage();
#ifdef USE_PYTHON
	PyObject * toJson() const;
#endif
	void dump(int indent) const;
	~aPackage();
};
