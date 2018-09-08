#include "signal.h"

Signal::Signal(Variable * variable) {
	this->variable = variable;
}

#ifdef USE_PYTHON
PyObject * Signal::toJson() const {
	PyObject *d = PyDict_New();
	PyDict_SetItemString(d, "variable", variable->toJson());
	return d;
}
#endif

void Signal::dump(int indent) const {
	std::cout << "{\n";
	indent += INDENT_INCR;
	dumpKey("variable", indent);
	variable->dump(indent);
	std::cout << "\n";
	mkIndent(indent - INDENT_INCR) << "}";
}

Signal::~Signal() {
	if (variable)
		delete variable;
}
