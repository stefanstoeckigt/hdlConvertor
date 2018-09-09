#include "process.h"
#include "../notImplementedLogger.h"

Process::Process() {
}

#ifdef USE_PYTHON
PyObject * Process::toJson() const {
	PyObject *d = PyDict_New();

    NotImplementedLogger::print("Process - Debug 1");
	if (entityName) {
		JSN_DEBUG("Arch - entityName")
		PyDict_SetItemString(d, "entityName", PyUnicode_FromString(entityName));
	} else {
		Py_IncRef (Py_None);
		PyDict_SetItemString(d, "entityName", Py_None);
	}

	NotImplementedLogger::print("Process - Debug 2");
	JSN_DEBUG("Process - functions")
	addJsonArrP(d, "functions", functions);

	NotImplementedLogger::print("Process - Debug 3");
	JSN_DEBUG("Process - constants")
	addJsonArrP(d, "constants", constants);

	NotImplementedLogger::print("Process - Debug 4");
	JSN_DEBUG("Process - variable")
	addJsonArrP(d, "variables", variables);

	NotImplementedLogger::print("Process - Debug 5");
	JSN_DEBUG("Process - sensitivity_list")
	//addJsonArrP(d, "sensitivity_list", sensitivity_list);

	NotImplementedLogger::print("Process - Debug 6");
	JSN_DEBUG("Process - body")
	addJsonArrP(d, "body", body);
	NotImplementedLogger::print("Process - Debug 7");	
	return d;
}
#endif

void Process::dump(int indent) const {
	mkIndent(indent) << "{\n";
	indent += INDENT_INCR;
	dumpArrP("functions", indent, functions) << ",\n";
	dumpArrP("constants", indent, constants) << ",\n";
	dumpArrP("variables", indent, variables) << ",\n";
	dumpArrP("sensitivity_list", indent, sensitivity_list) << ",\n";
	//dumpArrP("body", indent, body) << ",\n";
	indent -= INDENT_INCR;
	mkIndent(indent) << "}";
}


Process::~Process() {
	for (auto f : functions)
		delete f;
    for (auto c : constants)
		delete c;
	for (auto v : variables)
		delete v;	    
    for (auto s : sensitivity_list)
		delete s;	        
    for (auto b : body)
		delete b; 		     
}