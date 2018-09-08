#pragma once
#include <vector>
#include "../VhdlParser/vhdlParser.h"
#include "../hdlObjects/context.h"
#include "../notImplementedLogger.h"
#include "referenceParser.h"
#include "../hdlObjects/named.h"
#include "../hdlObjects/variable.h"
#include "../hdlObjects/packageHeader.h"

#include "compInstanceParser.h"
#include "exprParser.h"
#include "entityParser.h"
#include "interfaceParser.h"
#include "subProgramDeclarationParser.h"
#include "processParser.h"
#include "signalParser.h"
#include "constantParser.h"

using namespace antlr4;
using namespace vhdl;

class ArchParser : public Named {
public:
	Arch * a;
	bool hierarchyOnly;
	ArchParser(bool _hierarchyOnly);
	Arch * visitArchitecture_body(
			vhdlParser::Architecture_bodyContext * ctx);
	void visitBlock_declarative_item(
			vhdlParser::Block_declarative_itemContext * ctx);
	void visitArchitecture_statement(
			vhdlParser::Architecture_statementContext * ctx);
	Entity * visitComponent_declaration(
			vhdlParser::Component_declarationContext* ctx);					
	static Variable * visitSubtype_declaration(vhdlParser::Subtype_declarationContext* ctx);			

};
