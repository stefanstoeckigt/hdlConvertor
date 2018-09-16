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
#include "referenceParser.h"
#include "subProgramDeclarationParser.h"
#include "variableParser.h"
#include "constantParser.h"
#include "statementParser.h"
#include "subtypeDeclarationParser.h"
#include "subProgramParser.h" 

using namespace antlr4;
using namespace vhdl;

class GenerateStatementParser {
public:

    static void visitGenerate_statement(
            vhdlParser::Generate_statementContext *ctx);
    static void visitFor_generate_statement(
            vhdlParser::For_generate_statementContext *ctx);
    static void visitIf_generate_statement(
            vhdlParser::If_generate_statementContext *ctx);
    static void visitCase_generate_statement(
            vhdlParser::Case_generate_statementContext *ctx);
    static void visitCase_generate_alternative(
            vhdlParser::Case_generate_alternativeContext *ctx);
    static void visitGenerate_statement_body(
            vhdlParser::Generate_statement_bodyContext *ctx);                                        

};    