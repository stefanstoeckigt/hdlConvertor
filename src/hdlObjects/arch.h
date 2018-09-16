#pragma once
#include <vector>
#include "named.h"
#include "compInstance.h"
#include "entity.h"
#include "function.h"
#include "variable.h"
#include "jsonable.h"
#include "process.h"


class Arch: public Named {
public:
	const char * entityName;
	std::vector<CompInstance*> componentInstances;
	std::vector<Entity*> components;	
	std::vector<Function*> function_headers;
	std::vector<Function*> functions;
	std::vector<Variable*> subtype_headers;
	std::vector<Variable*> variables;	
	std::vector<Variable*> signals;
	std::vector<Variable*> constants;
	std::vector<Process*> processes;
#ifdef USE_PYTHON
	PyObject * toJson() const;
#endif
	~Arch();
};
