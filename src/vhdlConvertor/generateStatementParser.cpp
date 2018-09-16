#include "generateStatementParser.h"

void GenerateStatementParser::visitGenerate_statement(
        vhdlParser::Generate_statementContext *ctx) {
    //generate_statement
    //  : for_generate_statement
    //  | if_generate_statement
    //  | case_generate_statement
    //  ;

    auto fgs = ctx->for_generate_statement();
    if (fgs) {
        return visitFor_generate_statement(fgs);
    }

    auto ifs = ctx->if_generate_statement();
    if (ifs) {
        return visitIf_generate_statement(ifs);
    }

    auto cgs = ctx->case_generate_statement();
    if (cgs) {
        return visitCase_generate_statement(cgs);
    }

}

void GenerateStatementParser::visitFor_generate_statement(
        vhdlParser::For_generate_statementContext *ctx) {
    //for_generate_statement
    //  : label_colon FOR parameter_specification
    //    GENERATE
    //    generate_statement_body
    //    END GENERATE ( identifier )? SEMI
    //  ;             

	if (ctx->label_colon())
		NotImplementedLogger::print(
				"GenerateStatementParser.visitFor_generate_statement - label_colon");

}

void GenerateStatementParser::visitIf_generate_statement(
        vhdlParser::If_generate_statementContext *ctx) {
    //if_generate_statement
    //  : ( label_colon )? IF condition GENERATE
    //    generate_statement_body
    //    ( ELSIF condition GENERATE generate_statement_body )*
    //    ( ELSE GENERATE generate_statement_body)?
    //    END GENERATE ( identifier )? SEMI
    //  ;

	if (ctx->label_colon())
		NotImplementedLogger::print(
				"GenerateStatementParser.visitIf_generate_statement - label_colon");

}


void GenerateStatementParser::visitCase_generate_statement(
        vhdlParser::Case_generate_statementContext *ctx) {
    //case_generate_statement
    //  : ( label_colon )? CASE expression GENERATE
    //    ( case_generate_alternative )+ 
    //    END GENERATE ( identifier )? SEMI
    //  ;

	if (ctx->label_colon())
		NotImplementedLogger::print(
				"GenerateStatementParser.visitCase_generate_statement - label_colon");


}

void GenerateStatementParser::visitCase_generate_alternative(
        vhdlParser::Case_generate_alternativeContext *ctx) {
    //case_generate_alternative
    //  : WHEN choices ARROW generate_statement_body
    //  ;

    

}

void GenerateStatementParser::visitGenerate_statement_body(
        vhdlParser::Generate_statement_bodyContext *ctx) {
    //generate_statement_body
    //  : ( ( block_declarative_item )* BEGIN )?
    //    ( architecture_statement )*
    //  ;
}