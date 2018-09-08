#pragma once
#include "variable.h"

class Constant {
public:
	Variable * variable;

	Constant(Variable * variable);

#ifdef USE_PYTHON
	PyObject * toJson() const;
#endif
	void dump(int indent) const;
	~Constant();
};
