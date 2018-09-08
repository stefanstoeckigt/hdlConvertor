#include "process.h"
#include "../notImplementedLogger.h"

Process::Process(Expr * _entityName) {
	entityName = _entityName;
}

#ifdef USE_PYTHON
PyObject * Process::toJson() const {
    NotImplementedLogger::print("Process - Debug 0");
	PyObject *d = PyDict_New();
    NotImplementedLogger::print("Process - Debug 1");

    JSN_DEBUG("Process - entityName")
	PyDict_SetItemString(d, "entityName", entityName->toJson());
    NotImplementedLogger::print("Process - Debug 3");
    
	JSN_DEBUG("Process - functions")
	addJsonArrP(d, "functions", functions);

    JSN_DEBUG("Process - constants")
	addJsonArrP(d, "constants", constants);

    JSN_DEBUG("Process - sensitivity_list")
	addJsonArrP(d, "sensitivity_list", sensitivity_list);

	return d;
}
#endif

void Process::dump(int indent) const {
	mkIndent(indent) << "{\n";
	indent += INDENT_INCR;
	dumpArrP("functions", indent, functions) << ",\n";
	dumpArrP("constants", indent, constants) << ",\n";
	dumpArrP("sensitivity_list", indent, sensitivity_list) << ",\n";
	indent -= INDENT_INCR;
	mkIndent(indent) << "}";
}


Process::~Process() {
	for (auto f : functions)
		delete f;
    for (auto c : constants)
		delete c;    
    for (auto s : sensitivity_list)
		delete s;        
}