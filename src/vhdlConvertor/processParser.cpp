#include "processParser.h"

Process * ProcessParser::visitProcess_statement(
		vhdlParser::Process_statementContext * ctx) {
        //process_statement
        //  : ( label_colon )? ( POSTPONED )? PROCESS
        //    ( LPAREN sensitivity_list RPAREN )? ( IS )?
        //    process_declarative_part
        //    BEGIN
        //    process_statement_part 
        //    END ( POSTPONED )? PROCESS ( identifier )? SEMI
        //  ;
    Expr * e = NULL;
    if (ctx->label_colon()) {  
        e = LiteralParser::visitIdentifier(ctx->label_colon()->identifier()); 
    }
    Process * p = new Process(e); 

    //p->sensitivity_list = visitSensitivity_list(ctx->sensitivity_list());
    //visitProcess_declarative_part(ctx->process_declarative_part(), p);
    return p;
}

std::vector<Variable*> * ProcessParser::visitSensitivity_list (
        vhdlParser::Sensitivity_listContext *ctx) {
    //sensitivity_list
    //  : name ( COMMA name )*
    //  ;
    std::vector<Variable*> * names = new std::vector<Variable*>();
    for (auto n : ctx->name()) {
        Variable * v = new Variable(n->getText(), NULL, NULL);
        names->push_back(v);
    }
    return names;
}

void ProcessParser::visitProcess_declarative_part (
        vhdlParser::Process_declarative_partContext *ctx, Process * p) {
    //process_declarative_part
    //  : ( process_declarative_item )*
    //  ;
	for (auto pd : ctx->process_declarative_item()) {
        visitProcess_declarative_item(pd, p);
	}
}

void ProcessParser::visitProcess_declarative_item (
        vhdlParser::Process_declarative_itemContext *ctx, Process * p) {
    //process_declarative_item
    //  : subprogram_declaration
    //  | subprogram_body
    //  | type_declaration
    //  | subtype_declaration
    //  | constant_declaration
    //  | variable_declaration
    //  | file_declaration
    //  | alias_declaration
    //  | attribute_declaration
    //  | attribute_specification
    //  | use_clause
    //  | group_template_declaration
    //  | group_declaration
    //  ;
    auto sp = ctx->subprogram_declaration();
	if (sp) {
		p->functions.push_back(subProgramDeclarationParser::visitSubprogram_declaration(sp));
        return;
	}
    auto sb = ctx->subprogram_body();
	if (sb) {
		NotImplementedLogger::print(
				"ProcessParser.visitSubprogram_body");
        return;        
	}
    auto td = ctx->type_declaration();
	if (td) {
		NotImplementedLogger::print(
				"ProcessParser.visitType_declaration");
        return;        
	}
    auto st = ctx->subtype_declaration();
	if (st) {
		NotImplementedLogger::print(
				"ProcessParser.visitSubtype_declaration");
        return;        
	}
    auto constd = ctx->constant_declaration();
	if (constd) {
		auto constants = ConstantParser::visitConstant_declaration(constd);
		for (auto c : *constants) {
			p->constants.push_back(c);
		}
		delete constants;
        return;
	}    
	auto vd = ctx->variable_declaration();
	if (vd) {
		NotImplementedLogger::print(
				"ProcessParser.visitVariable_declaration");
        return;        
	}
	auto fd = ctx->file_declaration();
	if (fd) {
		NotImplementedLogger::print(
				"ProcessParser.visitFile_declaration");
        return;        
	}
	auto aliasd = ctx->alias_declaration();
	if (aliasd) {
		NotImplementedLogger::print(
				"ProcessParser.visitAlias_declaration");
        return;        
	}
    auto atrd = ctx->attribute_declaration();
	if (atrd) {
		NotImplementedLogger::print(
				"ProcessParser.visitAttribute_declaration");
        return;        
	}
	auto as = ctx->attribute_specification();
	if (as) {
		NotImplementedLogger::print(
				"ProcessParser.visitAttribute_specification");
        return;        
	}
    auto uc = ctx->use_clause();
	if (uc) {
		NotImplementedLogger::print("ProcessParser.visitUse_clause");
        return;
	}
	auto gtd = ctx->group_template_declaration();
	if (gtd) {
		NotImplementedLogger::print(
				"ProcessParser.visitGroup_template_declaration");
        return;        
	}
	auto gd = ctx->group_declaration();
	if (gd) {
		NotImplementedLogger::print(
				"ProcessParser.visitGroup_declaration");
        return;        
	}
}




