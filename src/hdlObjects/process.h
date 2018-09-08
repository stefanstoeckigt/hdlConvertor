#pragma once

#include <vector>
#include "jsonable.h"
#include <assert.h>
#include "named.h"
#include "expr.h"
#include "function.h"
#include "constant.h"
#include "variable.h"

class Process{
public:
	Expr * entityName;
	
	std::vector<Function*> functions;
	std::vector<Constant*> constants;
	std::vector<Variable*> sensitivity_list;

	Process(Expr * _entityName);
#ifdef USE_PYTHON
	PyObject * toJson() const;
#endif
	void dump(int indent) const;
	~Process();
};
