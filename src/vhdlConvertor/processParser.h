#pragma once
#include <vector>
#include "../VhdlParser/vhdlParser.h"
#include "../hdlObjects/context.h"
#include "../notImplementedLogger.h"
#include "referenceParser.h"
#include "../hdlObjects/named.h"
#include "../hdlObjects/expr.h"
#include "../hdlObjects/function.h"
#include "../hdlObjects/variable.h"
#include "../hdlObjects/packageHeader.h"
#include "../hdlObjects/process.h"

#include "compInstanceParser.h"
#include "exprParser.h"
#include "entityParser.h"
#include "interfaceParser.h"
#include "literalParser.h"
#include "subProgramDeclarationParser.h"
#include "constantParser.h"

using namespace antlr4;
using namespace vhdl;

class ProcessParser {

public:
    static Process * visitProcess_statement(
                vhdlParser::Process_statementContext * ctx); 
    static std::vector<Variable*> * visitSensitivity_list(
                vhdlParser::Sensitivity_listContext *ctx);            
    static void visitProcess_declarative_item(
                vhdlParser::Process_declarative_itemContext *ctx, Process * p);
    static void visitProcess_declarative_part(
                vhdlParser::Process_declarative_partContext *ctx, Process * p);	
};            