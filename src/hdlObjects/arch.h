#pragma once
#include <vector>
#include "named.h"
#include "compInstance.h"
#include "entity.h"
#include "function.h"
#include "variable.h"
#include "signal.h"
#include "constant.h"
#include "jsonable.h"
#include "process.h"


class Arch: public Named {
public:
	const char * entityName;
	std::vector<CompInstance*> componentInstances;
	std::vector<Entity*> components;	
	std::vector<Function*> functions;
	std::vector<Variable*> variables;	
	std::vector<Signal*> signals;
	std::vector<Constant*> constants;
	std::vector<Process*> processes;
#ifdef USE_PYTHON
	PyObject * toJson() const;
#endif
	~Arch();
};
