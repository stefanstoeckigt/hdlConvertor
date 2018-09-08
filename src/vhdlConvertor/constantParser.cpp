#include "constantParser.h"

std::vector<Constant*> * ConstantParser::visitConstant_declaration(
		vhdlParser::Constant_declarationContext* ctx) {
	std::vector<Constant*> * cl = new std::vector<Constant*>();		
	//constant_declaration :
	//    CONSTANT identifier_list COLON subtype_indication
	//    ( VARASGN expression )? SEMI
	//  ;

	std::vector<Variable*>* vl = InterfaceParser::extractVariables(ctx->identifier_list(),
		ctx->subtype_indication(), ctx->expression());

	for (auto v : *vl) {
		Constant * c = new Constant(v);
		cl->push_back(c);
	}

	return cl;
}