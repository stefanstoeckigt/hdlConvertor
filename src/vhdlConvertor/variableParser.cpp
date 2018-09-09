#include "variableParser.h"

std::vector<Variable*> * VariableParser::visitVariable_declaration(
		vhdlParser::Variable_declarationContext *ctx) {	
	//constant_declaration :
	//    CONSTANT identifier_list COLON subtype_indication
	//    ( VARASGN expression )? SEMI
	//  ;

	return InterfaceParser::extractVariables(ctx->identifier_list(),
			ctx->subtype_indication(), ctx->expression());
}