#pragma once

#include <vector>
#include "jsonable.h"
#include <assert.h>
#include "named.h"
#include "expr.h"
#include "function.h"
#include "variable.h"
#include "statement.h"

class Process {
public:
	const char * entityName;
	
	std::vector<Function*> functions;
	std::vector<Variable*> constants;
	std::vector<Variable*> variables;
	std::vector<Variable*> sensitivity_list;
	std::vector<Statement*> body;

	Process();
#ifdef USE_PYTHON
	PyObject * toJson() const;
#endif
	void dump(int indent) const;
	~Process();
};
