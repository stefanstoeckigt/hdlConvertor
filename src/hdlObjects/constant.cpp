#include "constant.h"

Constant::Constant(Variable * variable) {
	this->variable = variable;
}

#ifdef USE_PYTHON
PyObject * Constant::toJson() const {
	PyObject *d = PyDict_New();
	PyDict_SetItemString(d, "variable", variable->toJson());
	return d;
}
#endif

void Constant::dump(int indent) const {
	std::cout << "{\n";
	indent += INDENT_INCR;
	dumpKey("variable", indent);
	variable->dump(indent);
	std::cout << "\n";
	mkIndent(indent - INDENT_INCR) << "}";
}

Constant::~Constant() {
	if (variable)
		delete variable;
}
