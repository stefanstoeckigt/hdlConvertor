#pragma once
#include "variable.h"

class Signal {
public:
	Variable * variable;

	Signal(Variable * variable);

#ifdef USE_PYTHON
	PyObject * toJson() const;
#endif
	void dump(int indent) const;
	~Signal();
};
