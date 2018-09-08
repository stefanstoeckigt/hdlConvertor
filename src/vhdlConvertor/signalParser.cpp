#include "signalParser.h"

std::vector<Signal*> * SignalParser::visitSignal_declaration(
		vhdlParser::Signal_declarationContext* ctx) {
	std::vector<Signal*> * sl = new std::vector<Signal*>();
	//signal_declaration
	//	: SIGNAL identifier_list COLON
	//	subtype_indication ( signal_kind )? ( VARASGN expression )? SEMI
	//	;
	std::vector<Variable*>* vl = InterfaceParser::extractVariables(ctx->identifier_list(),
		ctx->subtype_indication(), ctx->expression());

	for (auto v : *vl) {
		Signal * s = new Signal(v);
		sl->push_back(s);
	}
	return sl;
}