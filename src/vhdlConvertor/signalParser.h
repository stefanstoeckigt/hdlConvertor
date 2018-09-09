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
#include "entityParser.h"
#include "interfaceParser.h"
#include "subProgramDeclarationParser.h"
#include "processParser.h"

using namespace antlr4;
using namespace vhdl;

class SignalParser {
public:
    static std::vector<Variable*> * visitSignal_declaration(
		    vhdlParser::Signal_declarationContext* ctx);			

};