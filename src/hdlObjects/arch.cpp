#include "arch.h"

#ifdef USE_PYTHON
PyObject * Arch::toJson() const {
	PyObject * o = Named::toJson();
	JSN_DEBUG("Arch - name")
	PyDict_SetItemString(o, "name", PyUnicode_FromString(name));

	JSN_DEBUG("Arch - entityName")
	PyDict_SetItemString(o, "entityName", PyUnicode_FromString(entityName));

	JSN_DEBUG("Arch - componentInstances")
	addJsonArrP(o, "componentInstances", componentInstances);

	JSN_DEBUG("Arch - components")
	addJsonArrP(o, "components", components);

	JSN_DEBUG("Arch - functions")
	addJsonArrP(o, "functions", functions);

	JSN_DEBUG("Arch - variables")
	addJsonArrP(o, "variables", variables);

	JSN_DEBUG("Arch - signals")
	addJsonArrP(o, "signals", signals);

	JSN_DEBUG("Arch - constants")
	addJsonArrP(o, "constants", constants);

	JSN_DEBUG("Arch - processes")
	addJsonArrP(o, "processes", processes);
	
	return o;
}
#endif

Arch::~Arch() {
	for (auto c : componentInstances)
		delete c;

	for (auto c : components)
		delete c;
	for (auto c : constants)
		delete c;		
	for (auto f : functions)
		delete f;
	for (auto v : variables)
		delete v;	
	for (auto p : processes)
		delete p;		
}
