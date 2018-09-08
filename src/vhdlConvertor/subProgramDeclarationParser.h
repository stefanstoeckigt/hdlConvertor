#pragma once
#include <vector>
#include "../VhdlParser/vhdlParser.h"
#include "../hdlObjects/context.h"
#include "../notImplementedLogger.h"
#include "referenceParser.h"
#include "../hdlObjects/named.h"
#include "../hdlObjects/function.h"
#include "../hdlObjects/variable.h"
#include "../hdlObjects/packageHeader.h"

#include "compInstanceParser.h"
#include "exprParser.h"
#include "interfaceParser.h"

using namespace antlr4;
using namespace vhdl;

class subProgramDeclarationParser {
public:
    static Function * visitSubprogram_declaration(
			vhdlParser::Subprogram_declarationContext* ctx);
	static Function * visitSubprogram_specification(
			vhdlParser::Subprogram_specificationContext* ctx);
	static Function * visitProcedure_specification(
			vhdlParser::Procedure_specificationContext* ctx);
	static Function * visitFunction_specification(
			vhdlParser::Function_specificationContext* ctx);
	static std::vector<Variable*> * visitFormal_parameter_list(
			vhdlParser::Formal_parameter_listContext* ctx);	
};            