#include "subProgramDeclarationParser.h"

Function * subProgramDeclarationParser::visitSubprogram_declaration(
		vhdlParser::Subprogram_declarationContext* ctx) {
	// subprogram_declaration
	// : subprogram_specification SEMI
	// ;
	return visitSubprogram_specification(ctx->subprogram_specification());
}

Function * subProgramDeclarationParser::visitSubprogram_specification(
		vhdlParser::Subprogram_specificationContext* ctx) {
	// subprogram_specification
	// : procedure_specification
	// | function_specification
	// ;
	auto p = ctx->procedure_specification();
	if (p)
		return visitProcedure_specification(p);
	else
		return visitFunction_specification(ctx->function_specification());
}

Function * subProgramDeclarationParser::visitProcedure_specification(
		vhdlParser::Procedure_specificationContext* ctx) {
	// procedure_specification
	// : PROCEDURE designator ( LPAREN formal_parameter_list RPAREN )?
	// ;
	auto designator = ctx->designator();
	Expr * returnT = NULL;
	bool isOperator = LiteralParser::isStrDesignator(designator);
	char * name = LiteralParser::visitDesignator(designator);
	std::vector<Variable*> * paramList = visitFormal_parameter_list(
			ctx->formal_parameter_list());

	return new Function(name, isOperator, returnT, paramList);
}

Function * subProgramDeclarationParser::visitFunction_specification(
		vhdlParser::Function_specificationContext* ctx) {
	// function_specification
	// : ( PURE | IMPURE )? FUNCTION designator
	// ( LPAREN formal_parameter_list RPAREN )? RETURN subtype_indication
	// ;
	auto designator = ctx->designator();
	Expr * returnT = ExprParser::visitSubtype_indication(
			ctx->subtype_indication());
	assert(returnT);

	bool isOperator = LiteralParser::isStrDesignator(designator);
	char * name = LiteralParser::visitDesignator(designator);
	std::vector<Variable*> * paramList = visitFormal_parameter_list(
			ctx->formal_parameter_list());

	return new Function(name, isOperator, returnT, paramList);
}

std::vector<Variable*> * subProgramDeclarationParser::visitFormal_parameter_list(
		vhdlParser::Formal_parameter_listContext* ctx) {
	// formal_parameter_list
	// : interface_list
	// ;
	return InterfaceParser::visitInterface_list(ctx->interface_list());
}