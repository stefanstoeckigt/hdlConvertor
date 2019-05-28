#pragma once

#include <vector>
#include "vhdlParser/vhdlParser.h"
#include "../hdlObjects/expr.h"

namespace hdlConvertor {
namespace vhdl {

class ExprParser {
public:
	using Expr = hdlObjects::Expr;
	using vhdlParser = vhdl_antlr::vhdlParser;

	static std::vector<Expr*> * visitActual_parameter_part(
			vhdlParser::Actual_parameter_partContext* ctx);
	static std::vector<Expr*> * visitAssociation_list(
			vhdlParser::Association_listContext *ctx);
	static Expr* visitAssociation_element(
			vhdlParser::Association_elementContext* ctx);
	static Expr* visitFormal_part(vhdlParser::Formal_partContext* ctx);
	static Expr* visitExplicit_range(vhdlParser::Explicit_rangeContext* ctx);
	static Expr* visitRange(vhdlParser::RangeContext* ctx);
	static Expr* visitActual_part(vhdlParser::Actual_partContext* ctx);
	static Expr* visitActual_designator(
			vhdlParser::Actual_designatorContext* ctx);
	static Expr* visitSubtype_indication(
			vhdlParser::Subtype_indicationContext* ctx);
	static Expr* visitConstraint(Expr * selectedName,
			vhdlParser::ConstraintContext* ctx);
	static Expr* visitIndex_constraint(
			vhdlParser::Index_constraintContext* ctx);
	static Expr* visitDiscrete_range(vhdlParser::Discrete_rangeContext* ctx);
	static Expr* visitSimple_expression(
			vhdlParser::Simple_expressionContext* ctx);
	static Expr* visitExpression(vhdlParser::ExpressionContext* ctx);
	static Expr* visitLogical_expression(
			vhdlParser::Logical_expressionContext *ctx);
	static Expr* visitRelation(vhdlParser::RelationContext* ctx);
	static Expr* visitShift_expression(
			vhdlParser::Shift_expressionContext* ctx);
	static Expr* visitTerm(vhdlParser::TermContext* ctx);
	static Expr* visitFactor(vhdlParser::FactorContext* ctx);
	static Expr* visitPrimary(vhdlParser::PrimaryContext* ctx);
	static Expr* visitQualified_expression(
			vhdlParser::Qualified_expressionContext* ctx);
	static Expr* visitAllocator(vhdlParser::AllocatorContext* ctx);
	static Expr* visitAggregate(vhdlParser::AggregateContext* ctx);
	static Expr* visitElement_association(
			vhdlParser::Element_associationContext* ctx);
	static Expr* visitTarget(vhdlParser::TargetContext* ctx);
	static Expr* visitWaveform(vhdlParser::WaveformContext* ctx);
	static Expr* visitWaveform_element(
			vhdlParser::Waveform_elementContext* ctx);
	/*
	 * @return expression if specified else nullptr for "others" the vhdl keyword
	 * */
	static Expr * visitChoice(vhdlParser::ChoiceContext * ctx);
	static std::vector<Expr *> visitChoices(vhdlParser::ChoicesContext * ctx);

	static Expr * visitProcedure_call_statement(
			vhdlParser::Procedure_call_statementContext * ctx);
	static Expr * visitProcedure_call(vhdlParser::Procedure_callContext * ctx);
};

}
}
