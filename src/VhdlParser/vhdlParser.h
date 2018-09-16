
// Generated from grammars/vhdl.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace vhdl {


class  vhdlParser : public antlr4::Parser {
public:
  enum {
    ABS = 1, ACCESS = 2, ACROSS = 3, AFTER = 4, ALIAS = 5, ALL = 6, AND = 7, 
    ARCHITECTURE = 8, ARRAY = 9, ASSERT = 10, ATTRIBUTE = 11, BEGIN = 12, 
    BLOCK = 13, BODY = 14, BREAK = 15, BUFFER = 16, BUS = 17, CASE = 18, 
    COMPONENT = 19, CONFIGURATION = 20, CONSTANT = 21, DISCONNECT = 22, 
    DOWNTO = 23, END = 24, ENTITY = 25, ELSE = 26, ELSIF = 27, EXIT = 28, 
    FILE = 29, FOR = 30, FORCE = 31, FUNCTION = 32, GENERATE = 33, GENERIC = 34, 
    GROUP = 35, GUARDED = 36, IF = 37, IMPURE = 38, IN = 39, INERTIAL = 40, 
    INOUT = 41, IS = 42, LABEL = 43, LIBRARY = 44, LIMIT = 45, LINKAGE = 46, 
    LITERAL = 47, LOOP = 48, MAP = 49, MOD = 50, NAND = 51, NATURE = 52, 
    NEW = 53, NEXT = 54, NOISE = 55, NOR = 56, NOT = 57, NULL_SYM = 58, 
    OF = 59, ON = 60, OPEN = 61, OR = 62, OTHERS = 63, OUT = 64, PACKAGE = 65, 
    PORT = 66, POSTPONED = 67, PROCESS = 68, PROCEDURE = 69, PROCEDURAL = 70, 
    PURE = 71, QUANTITY = 72, RANGE = 73, REVERSE_RANGE = 74, REJECT = 75, 
    REM = 76, RECORD = 77, REFERENCE = 78, REGISTER = 79, RELEASE = 80, 
    REPORT = 81, RETURN = 82, ROL = 83, ROR = 84, SELECT = 85, SEVERITY = 86, 
    SHARED = 87, SIGNAL = 88, SLA = 89, SLL = 90, SPECTRUM = 91, SRA = 92, 
    SRL = 93, SUBNATURE = 94, SUBTYPE = 95, TERMINAL = 96, THEN = 97, THROUGH = 98, 
    TO = 99, TOLERANCE = 100, TRANSPORT = 101, TYPE = 102, UNAFFECTED = 103, 
    UNITS = 104, UNTIL = 105, USE = 106, VARIABLE = 107, WAIT = 108, WITH = 109, 
    WHEN = 110, WHILE = 111, XNOR = 112, XOR = 113, BASE_LITERAL = 114, 
    BIT_STRING_LITERAL = 115, BIT_STRING_LITERAL_BINARY = 116, BIT_STRING_LITERAL_OCTAL = 117, 
    BIT_STRING_LITERAL_HEX = 118, BIT_STRING_LITERAL_DEC = 119, REAL_LITERAL = 120, 
    BASIC_IDENTIFIER = 121, EXTENDED_IDENTIFIER = 122, LETTER = 123, LOWER_CASE_LETTER = 124, 
    UPPER_CASE_LETTER = 125, COMMENT = 126, TAB = 127, SPACE = 128, NEWLINE = 129, 
    CR = 130, CHARACTER_LITERAL = 131, STRING_LITERAL = 132, OTHER_SPECIAL_CHARACTER = 133, 
    DOUBLESTAR = 134, ASSIGN = 135, LE = 136, GE = 137, ARROW = 138, NEQ = 139, 
    VARASGN = 140, BOX = 141, DBLQUOTE = 142, SEMI = 143, COMMA = 144, AMPERSAND = 145, 
    LPAREN = 146, RPAREN = 147, LBRACKET = 148, RBRACKET = 149, COLON = 150, 
    MUL = 151, DIV = 152, PLUS = 153, MINUS = 154, LOWERTHAN = 155, GREATERTHAN = 156, 
    EQ = 157, BAR = 158, DOT = 159, BACKSLASH = 160, TERNARY = 161, CONDITION_OPERATOR = 162, 
    EXPONENT = 163, HEXDIGIT = 164, INTEGER = 165, DIGIT = 166, BASED_INTEGER = 167, 
    EXTENDED_DIGIT = 168, APOSTROPHE = 169
  };

  enum {
    RuleAbstract_literal = 0, RuleAccess_type_definition = 1, RuleAcross_aspect = 2, 
    RuleActual_designator = 3, RuleActual_parameter_part = 4, RuleActual_part = 5, 
    RuleAdding_operator = 6, RuleAggregate = 7, RuleAlias_declaration = 8, 
    RuleAlias_designator = 9, RuleAlias_indication = 10, RuleAllocator = 11, 
    RuleArchitecture_body = 12, RuleArchitecture_declarative_part = 13, 
    RuleArchitecture_statement = 14, RuleArchitecture_statement_part = 15, 
    RuleArray_nature_definition = 16, RuleArray_type_definition = 17, RuleAssertion = 18, 
    RuleAssertion_statement = 19, RuleAssociation_element = 20, RuleAssociation_list = 21, 
    RuleAttribute_declaration = 22, RuleAttribute_designator = 23, RuleAttribute_specification = 24, 
    RuleBase_unit_declaration = 25, RuleBinding_indication = 26, RuleBlock_configuration = 27, 
    RuleBlock_declarative_item = 28, RuleBlock_declarative_part = 29, RuleBlock_header = 30, 
    RuleBlock_specification = 31, RuleBlock_statement = 32, RuleBlock_statement_part = 33, 
    RuleBranch_quantity_declaration = 34, RuleBreak_element = 35, RuleBreak_list = 36, 
    RuleBreak_selector_clause = 37, RuleBreak_statement = 38, RuleCase_statement = 39, 
    RuleCase_statement_alternative = 40, RuleChoice = 41, RuleChoices = 42, 
    RuleComponent_configuration = 43, RuleComponent_declaration = 44, RuleComponent_instantiation_statement = 45, 
    RuleComponent_specification = 46, RuleComposite_nature_definition = 47, 
    RuleComposite_type_definition = 48, RuleConcurrent_assertion_statement = 49, 
    RuleConcurrent_break_statement = 50, RuleConcurrent_procedure_call_statement = 51, 
    RuleConcurrent_signal_assignment_statement = 52, RuleConcurrent_simple_signal_assignment = 53, 
    RuleConcurrent_conditional_signal_assignment = 54, RuleConcurrent_selected_signal_assignment = 55, 
    RuleCondition = 56, RuleCondition_clause = 57, RuleConditional_signal_assignment = 58, 
    RuleConditional_waveform_assignment = 59, RuleConditional_force_assignment = 60, 
    RuleConditional_waveforms = 61, RuleConditional_expression = 62, RuleConfiguration_declaration = 63, 
    RuleConfiguration_declarative_item = 64, RuleConfiguration_declarative_part = 65, 
    RuleConfiguration_item = 66, RuleConfiguration_specification = 67, RuleConstant_declaration = 68, 
    RuleConstrained_array_definition = 69, RuleConstrained_nature_definition = 70, 
    RuleConstraint = 71, RuleContext_clause = 72, RuleContext_item = 73, 
    RuleDelay_mechanism = 74, RuleDesign_file = 75, RuleDesign_unit = 76, 
    RuleDesignator = 77, RuleDirection = 78, RuleDisconnection_specification = 79, 
    RuleDiscrete_range = 80, RuleElement_association = 81, RuleElement_declaration = 82, 
    RuleElement_subnature_definition = 83, RuleElement_subtype_definition = 84, 
    RuleEntity_aspect = 85, RuleEntity_class = 86, RuleEntity_class_entry = 87, 
    RuleEntity_class_entry_list = 88, RuleEntity_declaration = 89, RuleEntity_declarative_item = 90, 
    RuleEntity_declarative_part = 91, RuleEntity_designator = 92, RuleEntity_header = 93, 
    RuleEntity_name_list = 94, RuleEntity_specification = 95, RuleEntity_statement = 96, 
    RuleEntity_statement_part = 97, RuleEntity_tag = 98, RuleEnumeration_literal = 99, 
    RuleEnumeration_type_definition = 100, RuleExit_statement = 101, RuleExpression = 102, 
    RuleLogical_expression = 103, RuleFactor = 104, RuleFile_declaration = 105, 
    RuleFile_logical_name = 106, RuleFile_open_information = 107, RuleFile_type_definition = 108, 
    RuleFormal_parameter_list = 109, RuleFormal_part = 110, RuleFree_quantity_declaration = 111, 
    RuleGenerate_statement = 112, RuleFor_generate_statement = 113, RuleIf_generate_statement = 114, 
    RuleCase_generate_statement = 115, RuleCase_generate_alternative = 116, 
    RuleGenerate_statement_body = 117, RuleGeneration_scheme = 118, RuleGeneric_clause = 119, 
    RuleGeneric_list = 120, RuleGeneric_map_aspect = 121, RuleGroup_constituent = 122, 
    RuleGroup_constituent_list = 123, RuleGroup_declaration = 124, RuleGroup_template_declaration = 125, 
    RuleGuarded_signal_specification = 126, RuleIdentifier = 127, RuleIdentifier_list = 128, 
    RuleIf_statement = 129, RuleIndex_constraint = 130, RuleIndex_specification = 131, 
    RuleIndex_subtype_definition = 132, RuleInstantiated_unit = 133, RuleInstantiation_list = 134, 
    RuleInterface_constant_declaration = 135, RuleInterface_declaration = 136, 
    RuleInterface_element = 137, RuleInterface_file_declaration = 138, RuleInterface_signal_list = 139, 
    RuleInterface_port_list = 140, RuleInterface_list = 141, RuleInterface_quantity_declaration = 142, 
    RuleInterface_port_declaration = 143, RuleInterface_signal_declaration = 144, 
    RuleInterface_terminal_declaration = 145, RuleInterface_variable_declaration = 146, 
    RuleIteration_scheme = 147, RuleLabel_colon = 148, RuleLibrary_clause = 149, 
    RuleLibrary_unit = 150, RuleLiteral = 151, RuleLogical_name = 152, RuleLogical_name_list = 153, 
    RuleLogical_operator = 154, RuleLoop_statement = 155, RuleSignal_mode = 156, 
    RuleMultiplying_operator = 157, RuleName = 158, RuleName_part = 159, 
    RuleName_part_specificator = 160, RuleName_attribute_part = 161, RuleName_function_call_or_indexed_part = 162, 
    RuleName_slice_part = 163, RuleSelected_name = 164, RuleNature_declaration = 165, 
    RuleNature_definition = 166, RuleNature_element_declaration = 167, RuleNext_statement = 168, 
    RuleNumeric_literal = 169, RuleObject_declaration = 170, RuleOpts = 171, 
    RulePackage_body = 172, RulePackage_body_declarative_item = 173, RulePackage_body_declarative_part = 174, 
    RulePackage_declaration = 175, RulePackage_declarative_item = 176, RulePackage_declarative_part = 177, 
    RuleParameter_specification = 178, RulePhysical_literal = 179, RulePhysical_type_definition = 180, 
    RulePort_clause = 181, RulePort_list = 182, RulePort_map_aspect = 183, 
    RulePrimary = 184, RulePrimary_unit = 185, RuleProcedural_declarative_item = 186, 
    RuleProcedural_declarative_part = 187, RuleProcedural_statement_part = 188, 
    RuleProcedure_call = 189, RuleProcedure_call_statement = 190, RuleProcess_declarative_item = 191, 
    RuleProcess_declarative_part = 192, RuleProcess_statement = 193, RuleProcess_statement_part = 194, 
    RuleQualified_expression = 195, RuleQuantity_declaration = 196, RuleQuantity_list = 197, 
    RuleQuantity_specification = 198, RuleRange = 199, RuleExplicit_range = 200, 
    RuleRange_constraint = 201, RuleRecord_nature_definition = 202, RuleRecord_type_definition = 203, 
    RuleRelation = 204, RuleRelational_operator = 205, RuleReport_statement = 206, 
    RuleReturn_statement = 207, RuleScalar_nature_definition = 208, RuleScalar_type_definition = 209, 
    RuleSecondary_unit = 210, RuleSecondary_unit_declaration = 211, RuleSelected_signal_assignment = 212, 
    RuleSelected_waveforms = 213, RuleSensitivity_clause = 214, RuleSensitivity_list = 215, 
    RuleSequence_of_statements = 216, RuleSequential_statement = 217, RuleShift_expression = 218, 
    RuleShift_operator = 219, RuleSignal_assignment_statement = 220, RuleSimple_signal_assignment = 221, 
    RuleSimple_waveform_assignment = 222, RuleSimple_force_assignment = 223, 
    RuleSimple_release_assignment = 224, RuleForce_mode = 225, RuleSignal_declaration = 226, 
    RuleSignal_kind = 227, RuleSignal_list = 228, RuleSignature = 229, RuleSimple_expression = 230, 
    RuleSimple_simultaneous_statement = 231, RuleSimultaneous_alternative = 232, 
    RuleSimultaneous_case_statement = 233, RuleSimultaneous_if_statement = 234, 
    RuleSimultaneous_procedural_statement = 235, RuleSimultaneous_statement = 236, 
    RuleSimultaneous_statement_part = 237, RuleSource_aspect = 238, RuleSource_quantity_declaration = 239, 
    RuleStep_limit_specification = 240, RuleSubnature_declaration = 241, 
    RuleSubnature_indication = 242, RuleSubprogram_body = 243, RuleSubprogram_declaration = 244, 
    RuleSubprogram_declarative_item = 245, RuleSubprogram_declarative_part = 246, 
    RuleSubprogram_kind = 247, RuleSubprogram_specification = 248, RuleProcedure_specification = 249, 
    RuleFunction_specification = 250, RuleSubprogram_statement_part = 251, 
    RuleSubtype_declaration = 252, RuleSubtype_indication = 253, RuleSuffix = 254, 
    RuleTarget = 255, RuleTerm = 256, RuleTerminal_aspect = 257, RuleTerminal_declaration = 258, 
    RuleThrough_aspect = 259, RuleTimeout_clause = 260, RuleTolerance_aspect = 261, 
    RuleType_declaration = 262, RuleType_definition = 263, RuleUnconstrained_array_definition = 264, 
    RuleUnconstrained_nature_definition = 265, RuleUse_clause = 266, RuleVariable_assignment_statement = 267, 
    RuleSimple_variable_assignment = 268, RuleConditional_variable_assignment = 269, 
    RuleSelected_variable_assignment = 270, RuleVariable_declaration = 271, 
    RuleWait_statement = 272, RuleWaveform = 273, RuleWaveform_element = 274
  };

  vhdlParser(antlr4::TokenStream *input);
  ~vhdlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Abstract_literalContext;
  class Access_type_definitionContext;
  class Across_aspectContext;
  class Actual_designatorContext;
  class Actual_parameter_partContext;
  class Actual_partContext;
  class Adding_operatorContext;
  class AggregateContext;
  class Alias_declarationContext;
  class Alias_designatorContext;
  class Alias_indicationContext;
  class AllocatorContext;
  class Architecture_bodyContext;
  class Architecture_declarative_partContext;
  class Architecture_statementContext;
  class Architecture_statement_partContext;
  class Array_nature_definitionContext;
  class Array_type_definitionContext;
  class AssertionContext;
  class Assertion_statementContext;
  class Association_elementContext;
  class Association_listContext;
  class Attribute_declarationContext;
  class Attribute_designatorContext;
  class Attribute_specificationContext;
  class Base_unit_declarationContext;
  class Binding_indicationContext;
  class Block_configurationContext;
  class Block_declarative_itemContext;
  class Block_declarative_partContext;
  class Block_headerContext;
  class Block_specificationContext;
  class Block_statementContext;
  class Block_statement_partContext;
  class Branch_quantity_declarationContext;
  class Break_elementContext;
  class Break_listContext;
  class Break_selector_clauseContext;
  class Break_statementContext;
  class Case_statementContext;
  class Case_statement_alternativeContext;
  class ChoiceContext;
  class ChoicesContext;
  class Component_configurationContext;
  class Component_declarationContext;
  class Component_instantiation_statementContext;
  class Component_specificationContext;
  class Composite_nature_definitionContext;
  class Composite_type_definitionContext;
  class Concurrent_assertion_statementContext;
  class Concurrent_break_statementContext;
  class Concurrent_procedure_call_statementContext;
  class Concurrent_signal_assignment_statementContext;
  class Concurrent_simple_signal_assignmentContext;
  class Concurrent_conditional_signal_assignmentContext;
  class Concurrent_selected_signal_assignmentContext;
  class ConditionContext;
  class Condition_clauseContext;
  class Conditional_signal_assignmentContext;
  class Conditional_waveform_assignmentContext;
  class Conditional_force_assignmentContext;
  class Conditional_waveformsContext;
  class Conditional_expressionContext;
  class Configuration_declarationContext;
  class Configuration_declarative_itemContext;
  class Configuration_declarative_partContext;
  class Configuration_itemContext;
  class Configuration_specificationContext;
  class Constant_declarationContext;
  class Constrained_array_definitionContext;
  class Constrained_nature_definitionContext;
  class ConstraintContext;
  class Context_clauseContext;
  class Context_itemContext;
  class Delay_mechanismContext;
  class Design_fileContext;
  class Design_unitContext;
  class DesignatorContext;
  class DirectionContext;
  class Disconnection_specificationContext;
  class Discrete_rangeContext;
  class Element_associationContext;
  class Element_declarationContext;
  class Element_subnature_definitionContext;
  class Element_subtype_definitionContext;
  class Entity_aspectContext;
  class Entity_classContext;
  class Entity_class_entryContext;
  class Entity_class_entry_listContext;
  class Entity_declarationContext;
  class Entity_declarative_itemContext;
  class Entity_declarative_partContext;
  class Entity_designatorContext;
  class Entity_headerContext;
  class Entity_name_listContext;
  class Entity_specificationContext;
  class Entity_statementContext;
  class Entity_statement_partContext;
  class Entity_tagContext;
  class Enumeration_literalContext;
  class Enumeration_type_definitionContext;
  class Exit_statementContext;
  class ExpressionContext;
  class Logical_expressionContext;
  class FactorContext;
  class File_declarationContext;
  class File_logical_nameContext;
  class File_open_informationContext;
  class File_type_definitionContext;
  class Formal_parameter_listContext;
  class Formal_partContext;
  class Free_quantity_declarationContext;
  class Generate_statementContext;
  class For_generate_statementContext;
  class If_generate_statementContext;
  class Case_generate_statementContext;
  class Case_generate_alternativeContext;
  class Generate_statement_bodyContext;
  class Generation_schemeContext;
  class Generic_clauseContext;
  class Generic_listContext;
  class Generic_map_aspectContext;
  class Group_constituentContext;
  class Group_constituent_listContext;
  class Group_declarationContext;
  class Group_template_declarationContext;
  class Guarded_signal_specificationContext;
  class IdentifierContext;
  class Identifier_listContext;
  class If_statementContext;
  class Index_constraintContext;
  class Index_specificationContext;
  class Index_subtype_definitionContext;
  class Instantiated_unitContext;
  class Instantiation_listContext;
  class Interface_constant_declarationContext;
  class Interface_declarationContext;
  class Interface_elementContext;
  class Interface_file_declarationContext;
  class Interface_signal_listContext;
  class Interface_port_listContext;
  class Interface_listContext;
  class Interface_quantity_declarationContext;
  class Interface_port_declarationContext;
  class Interface_signal_declarationContext;
  class Interface_terminal_declarationContext;
  class Interface_variable_declarationContext;
  class Iteration_schemeContext;
  class Label_colonContext;
  class Library_clauseContext;
  class Library_unitContext;
  class LiteralContext;
  class Logical_nameContext;
  class Logical_name_listContext;
  class Logical_operatorContext;
  class Loop_statementContext;
  class Signal_modeContext;
  class Multiplying_operatorContext;
  class NameContext;
  class Name_partContext;
  class Name_part_specificatorContext;
  class Name_attribute_partContext;
  class Name_function_call_or_indexed_partContext;
  class Name_slice_partContext;
  class Selected_nameContext;
  class Nature_declarationContext;
  class Nature_definitionContext;
  class Nature_element_declarationContext;
  class Next_statementContext;
  class Numeric_literalContext;
  class Object_declarationContext;
  class OptsContext;
  class Package_bodyContext;
  class Package_body_declarative_itemContext;
  class Package_body_declarative_partContext;
  class Package_declarationContext;
  class Package_declarative_itemContext;
  class Package_declarative_partContext;
  class Parameter_specificationContext;
  class Physical_literalContext;
  class Physical_type_definitionContext;
  class Port_clauseContext;
  class Port_listContext;
  class Port_map_aspectContext;
  class PrimaryContext;
  class Primary_unitContext;
  class Procedural_declarative_itemContext;
  class Procedural_declarative_partContext;
  class Procedural_statement_partContext;
  class Procedure_callContext;
  class Procedure_call_statementContext;
  class Process_declarative_itemContext;
  class Process_declarative_partContext;
  class Process_statementContext;
  class Process_statement_partContext;
  class Qualified_expressionContext;
  class Quantity_declarationContext;
  class Quantity_listContext;
  class Quantity_specificationContext;
  class RangeContext;
  class Explicit_rangeContext;
  class Range_constraintContext;
  class Record_nature_definitionContext;
  class Record_type_definitionContext;
  class RelationContext;
  class Relational_operatorContext;
  class Report_statementContext;
  class Return_statementContext;
  class Scalar_nature_definitionContext;
  class Scalar_type_definitionContext;
  class Secondary_unitContext;
  class Secondary_unit_declarationContext;
  class Selected_signal_assignmentContext;
  class Selected_waveformsContext;
  class Sensitivity_clauseContext;
  class Sensitivity_listContext;
  class Sequence_of_statementsContext;
  class Sequential_statementContext;
  class Shift_expressionContext;
  class Shift_operatorContext;
  class Signal_assignment_statementContext;
  class Simple_signal_assignmentContext;
  class Simple_waveform_assignmentContext;
  class Simple_force_assignmentContext;
  class Simple_release_assignmentContext;
  class Force_modeContext;
  class Signal_declarationContext;
  class Signal_kindContext;
  class Signal_listContext;
  class SignatureContext;
  class Simple_expressionContext;
  class Simple_simultaneous_statementContext;
  class Simultaneous_alternativeContext;
  class Simultaneous_case_statementContext;
  class Simultaneous_if_statementContext;
  class Simultaneous_procedural_statementContext;
  class Simultaneous_statementContext;
  class Simultaneous_statement_partContext;
  class Source_aspectContext;
  class Source_quantity_declarationContext;
  class Step_limit_specificationContext;
  class Subnature_declarationContext;
  class Subnature_indicationContext;
  class Subprogram_bodyContext;
  class Subprogram_declarationContext;
  class Subprogram_declarative_itemContext;
  class Subprogram_declarative_partContext;
  class Subprogram_kindContext;
  class Subprogram_specificationContext;
  class Procedure_specificationContext;
  class Function_specificationContext;
  class Subprogram_statement_partContext;
  class Subtype_declarationContext;
  class Subtype_indicationContext;
  class SuffixContext;
  class TargetContext;
  class TermContext;
  class Terminal_aspectContext;
  class Terminal_declarationContext;
  class Through_aspectContext;
  class Timeout_clauseContext;
  class Tolerance_aspectContext;
  class Type_declarationContext;
  class Type_definitionContext;
  class Unconstrained_array_definitionContext;
  class Unconstrained_nature_definitionContext;
  class Use_clauseContext;
  class Variable_assignment_statementContext;
  class Simple_variable_assignmentContext;
  class Conditional_variable_assignmentContext;
  class Selected_variable_assignmentContext;
  class Variable_declarationContext;
  class Wait_statementContext;
  class WaveformContext;
  class Waveform_elementContext; 

  class  Abstract_literalContext : public antlr4::ParserRuleContext {
  public:
    Abstract_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *BASE_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Abstract_literalContext* abstract_literal();

  class  Access_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Access_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    Subtype_indicationContext *subtype_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Access_type_definitionContext* access_type_definition();

  class  Across_aspectContext : public antlr4::ParserRuleContext {
  public:
    Across_aspectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *ACROSS();
    Tolerance_aspectContext *tolerance_aspect();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Across_aspectContext* across_aspect();

  class  Actual_designatorContext : public antlr4::ParserRuleContext {
  public:
    Actual_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OPEN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Actual_designatorContext* actual_designator();

  class  Actual_parameter_partContext : public antlr4::ParserRuleContext {
  public:
    Actual_parameter_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Association_listContext *association_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Actual_parameter_partContext* actual_parameter_part();

  class  Actual_partContext : public antlr4::ParserRuleContext {
  public:
    Actual_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *LPAREN();
    Actual_designatorContext *actual_designator();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Actual_partContext* actual_part();

  class  Adding_operatorContext : public antlr4::ParserRuleContext {
  public:
    Adding_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *AMPERSAND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Adding_operatorContext* adding_operator();

  class  AggregateContext : public antlr4::ParserRuleContext {
  public:
    AggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Element_associationContext *> element_association();
    Element_associationContext* element_association(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregateContext* aggregate();

  class  Alias_declarationContext : public antlr4::ParserRuleContext {
  public:
    Alias_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALIAS();
    Alias_designatorContext *alias_designator();
    antlr4::tree::TerminalNode *IS();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *COLON();
    Alias_indicationContext *alias_indication();
    SignatureContext *signature();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alias_declarationContext* alias_declaration();

  class  Alias_designatorContext : public antlr4::ParserRuleContext {
  public:
    Alias_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CHARACTER_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alias_designatorContext* alias_designator();

  class  Alias_indicationContext : public antlr4::ParserRuleContext {
  public:
    Alias_indicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subnature_indicationContext *subnature_indication();
    Subtype_indicationContext *subtype_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alias_indicationContext* alias_indication();

  class  AllocatorContext : public antlr4::ParserRuleContext {
  public:
    AllocatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    Qualified_expressionContext *qualified_expression();
    Subtype_indicationContext *subtype_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllocatorContext* allocator();

  class  Architecture_bodyContext : public antlr4::ParserRuleContext {
  public:
    Architecture_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ARCHITECTURE();
    antlr4::tree::TerminalNode* ARCHITECTURE(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *IS();
    Architecture_declarative_partContext *architecture_declarative_part();
    antlr4::tree::TerminalNode *BEGIN();
    Architecture_statement_partContext *architecture_statement_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Architecture_bodyContext* architecture_body();

  class  Architecture_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Architecture_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Block_declarative_itemContext *> block_declarative_item();
    Block_declarative_itemContext* block_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Architecture_declarative_partContext* architecture_declarative_part();

  class  Architecture_statementContext : public antlr4::ParserRuleContext {
  public:
    Architecture_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_statementContext *block_statement();
    Process_statementContext *process_statement();
    Concurrent_procedure_call_statementContext *concurrent_procedure_call_statement();
    Label_colonContext *label_colon();
    Concurrent_assertion_statementContext *concurrent_assertion_statement();
    Concurrent_signal_assignment_statementContext *concurrent_signal_assignment_statement();
    antlr4::tree::TerminalNode *POSTPONED();
    Component_instantiation_statementContext *component_instantiation_statement();
    Generate_statementContext *generate_statement();
    Concurrent_break_statementContext *concurrent_break_statement();
    Simultaneous_statementContext *simultaneous_statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Architecture_statementContext* architecture_statement();

  class  Architecture_statement_partContext : public antlr4::ParserRuleContext {
  public:
    Architecture_statement_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Architecture_statementContext *> architecture_statement();
    Architecture_statementContext* architecture_statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Architecture_statement_partContext* architecture_statement_part();

  class  Array_nature_definitionContext : public antlr4::ParserRuleContext {
  public:
    Array_nature_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unconstrained_nature_definitionContext *unconstrained_nature_definition();
    Constrained_nature_definitionContext *constrained_nature_definition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_nature_definitionContext* array_nature_definition();

  class  Array_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Array_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unconstrained_array_definitionContext *unconstrained_array_definition();
    Constrained_array_definitionContext *constrained_array_definition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_type_definitionContext* array_type_definition();

  class  AssertionContext : public antlr4::ParserRuleContext {
  public:
    AssertionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *REPORT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SEVERITY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssertionContext* assertion();

  class  Assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssertionContext *assertion();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assertion_statementContext* assertion_statement();

  class  Association_elementContext : public antlr4::ParserRuleContext {
  public:
    Association_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Actual_partContext *actual_part();
    Formal_partContext *formal_part();
    antlr4::tree::TerminalNode *ARROW();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Association_elementContext* association_element();

  class  Association_listContext : public antlr4::ParserRuleContext {
  public:
    Association_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Association_elementContext *> association_element();
    Association_elementContext* association_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Association_listContext* association_list();

  class  Attribute_declarationContext : public antlr4::ParserRuleContext {
  public:
    Attribute_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE();
    Label_colonContext *label_colon();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_declarationContext* attribute_declaration();

  class  Attribute_designatorContext : public antlr4::ParserRuleContext {
  public:
    Attribute_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *REVERSE_RANGE();
    antlr4::tree::TerminalNode *ACROSS();
    antlr4::tree::TerminalNode *THROUGH();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *TOLERANCE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_designatorContext* attribute_designator();

  class  Attribute_specificationContext : public antlr4::ParserRuleContext {
  public:
    Attribute_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE();
    Attribute_designatorContext *attribute_designator();
    antlr4::tree::TerminalNode *OF();
    Entity_specificationContext *entity_specification();
    antlr4::tree::TerminalNode *IS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_specificationContext* attribute_specification();

  class  Base_unit_declarationContext : public antlr4::ParserRuleContext {
  public:
    Base_unit_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_unit_declarationContext* base_unit_declaration();

  class  Binding_indicationContext : public antlr4::ParserRuleContext {
  public:
    Binding_indicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    Entity_aspectContext *entity_aspect();
    Generic_map_aspectContext *generic_map_aspect();
    Port_map_aspectContext *port_map_aspect();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binding_indicationContext* binding_indication();

  class  Block_configurationContext : public antlr4::ParserRuleContext {
  public:
    Block_configurationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    Block_specificationContext *block_specification();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Use_clauseContext *> use_clause();
    Use_clauseContext* use_clause(size_t i);
    std::vector<Configuration_itemContext *> configuration_item();
    Configuration_itemContext* configuration_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_configurationContext* block_configuration();

  class  Block_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Block_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Subprogram_bodyContext *subprogram_body();
    Type_declarationContext *type_declaration();
    Subtype_declarationContext *subtype_declaration();
    Constant_declarationContext *constant_declaration();
    Signal_declarationContext *signal_declaration();
    Variable_declarationContext *variable_declaration();
    File_declarationContext *file_declaration();
    Alias_declarationContext *alias_declaration();
    Component_declarationContext *component_declaration();
    Attribute_declarationContext *attribute_declaration();
    Attribute_specificationContext *attribute_specification();
    Configuration_specificationContext *configuration_specification();
    Disconnection_specificationContext *disconnection_specification();
    Step_limit_specificationContext *step_limit_specification();
    Use_clauseContext *use_clause();
    Group_template_declarationContext *group_template_declaration();
    Group_declarationContext *group_declaration();
    Nature_declarationContext *nature_declaration();
    Subnature_declarationContext *subnature_declaration();
    Quantity_declarationContext *quantity_declaration();
    Terminal_declarationContext *terminal_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_declarative_itemContext* block_declarative_item();

  class  Block_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Block_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Block_declarative_itemContext *> block_declarative_item();
    Block_declarative_itemContext* block_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_declarative_partContext* block_declarative_part();

  class  Block_headerContext : public antlr4::ParserRuleContext {
  public:
    Block_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generic_clauseContext *generic_clause();
    Port_clauseContext *port_clause();
    Generic_map_aspectContext *generic_map_aspect();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    Port_map_aspectContext *port_map_aspect();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_headerContext* block_header();

  class  Block_specificationContext : public antlr4::ParserRuleContext {
  public:
    Block_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Index_specificationContext *index_specification();
    antlr4::tree::TerminalNode *RPAREN();
    NameContext *name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_specificationContext* block_specification();

  class  Block_statementContext : public antlr4::ParserRuleContext {
  public:
    Block_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Label_colonContext *label_colon();
    std::vector<antlr4::tree::TerminalNode *> BLOCK();
    antlr4::tree::TerminalNode* BLOCK(size_t i);
    Block_headerContext *block_header();
    Block_declarative_partContext *block_declarative_part();
    antlr4::tree::TerminalNode *BEGIN();
    Block_statement_partContext *block_statement_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *IS();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_statementContext* block_statement();

  class  Block_statement_partContext : public antlr4::ParserRuleContext {
  public:
    Block_statement_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Architecture_statementContext *> architecture_statement();
    Architecture_statementContext* architecture_statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_statement_partContext* block_statement_part();

  class  Branch_quantity_declarationContext : public antlr4::ParserRuleContext {
  public:
    Branch_quantity_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUANTITY();
    Terminal_aspectContext *terminal_aspect();
    antlr4::tree::TerminalNode *SEMI();
    Across_aspectContext *across_aspect();
    Through_aspectContext *through_aspect();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Branch_quantity_declarationContext* branch_quantity_declaration();

  class  Break_elementContext : public antlr4::ParserRuleContext {
  public:
    Break_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *ARROW();
    ExpressionContext *expression();
    Break_selector_clauseContext *break_selector_clause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_elementContext* break_element();

  class  Break_listContext : public antlr4::ParserRuleContext {
  public:
    Break_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Break_elementContext *> break_element();
    Break_elementContext* break_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_listContext* break_list();

  class  Break_selector_clauseContext : public antlr4::ParserRuleContext {
  public:
    Break_selector_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    NameContext *name();
    antlr4::tree::TerminalNode *USE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_selector_clauseContext* break_selector_clause();

  class  Break_statementContext : public antlr4::ParserRuleContext {
  public:
    Break_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    Break_listContext *break_list();
    antlr4::tree::TerminalNode *WHEN();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_statementContext* break_statement();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    std::vector<Case_statement_alternativeContext *> case_statement_alternative();
    Case_statement_alternativeContext* case_statement_alternative(size_t i);
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  Case_statement_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Case_statement_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    ChoicesContext *choices();
    antlr4::tree::TerminalNode *ARROW();
    Sequence_of_statementsContext *sequence_of_statements();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statement_alternativeContext* case_statement_alternative();

  class  ChoiceContext : public antlr4::ParserRuleContext {
  public:
    ChoiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Discrete_rangeContext *discrete_range();
    Simple_expressionContext *simple_expression();
    antlr4::tree::TerminalNode *OTHERS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChoiceContext* choice();

  class  ChoicesContext : public antlr4::ParserRuleContext {
  public:
    ChoicesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ChoiceContext *> choice();
    ChoiceContext* choice(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BAR();
    antlr4::tree::TerminalNode* BAR(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChoicesContext* choices();

  class  Component_configurationContext : public antlr4::ParserRuleContext {
  public:
    Component_configurationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    Component_specificationContext *component_specification();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    Binding_indicationContext *binding_indication();
    Block_configurationContext *block_configuration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_configurationContext* component_configuration();

  class  Component_declarationContext : public antlr4::ParserRuleContext {
  public:
    Component_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMPONENT();
    antlr4::tree::TerminalNode* COMPONENT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *IS();
    Generic_clauseContext *generic_clause();
    Port_clauseContext *port_clause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_declarationContext* component_declaration();

  class  Component_instantiation_statementContext : public antlr4::ParserRuleContext {
  public:
    Component_instantiation_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Label_colonContext *label_colon();
    Instantiated_unitContext *instantiated_unit();
    antlr4::tree::TerminalNode *SEMI();
    Generic_map_aspectContext *generic_map_aspect();
    Port_map_aspectContext *port_map_aspect();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_instantiation_statementContext* component_instantiation_statement();

  class  Component_specificationContext : public antlr4::ParserRuleContext {
  public:
    Component_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Instantiation_listContext *instantiation_list();
    antlr4::tree::TerminalNode *COLON();
    NameContext *name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_specificationContext* component_specification();

  class  Composite_nature_definitionContext : public antlr4::ParserRuleContext {
  public:
    Composite_nature_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_nature_definitionContext *array_nature_definition();
    Record_nature_definitionContext *record_nature_definition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Composite_nature_definitionContext* composite_nature_definition();

  class  Composite_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Composite_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_type_definitionContext *array_type_definition();
    Record_type_definitionContext *record_type_definition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Composite_type_definitionContext* composite_type_definition();

  class  Concurrent_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssertionContext *assertion();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    antlr4::tree::TerminalNode *POSTPONED();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_assertion_statementContext* concurrent_assertion_statement();

  class  Concurrent_break_statementContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_break_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    Break_listContext *break_list();
    Sensitivity_clauseContext *sensitivity_clause();
    antlr4::tree::TerminalNode *WHEN();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_break_statementContext* concurrent_break_statement();

  class  Concurrent_procedure_call_statementContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_procedure_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_callContext *procedure_call();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    antlr4::tree::TerminalNode *POSTPONED();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_procedure_call_statementContext* concurrent_procedure_call_statement();

  class  Concurrent_signal_assignment_statementContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_signal_assignment_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_simple_signal_assignmentContext *concurrent_simple_signal_assignment();
    Label_colonContext *label_colon();
    antlr4::tree::TerminalNode *POSTPONED();
    Concurrent_conditional_signal_assignmentContext *concurrent_conditional_signal_assignment();
    Concurrent_selected_signal_assignmentContext *concurrent_selected_signal_assignment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_signal_assignment_statementContext* concurrent_signal_assignment_statement();

  class  Concurrent_simple_signal_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_simple_signal_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    OptsContext *opts();
    WaveformContext *waveform();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_simple_signal_assignmentContext* concurrent_simple_signal_assignment();

  class  Concurrent_conditional_signal_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_conditional_signal_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    OptsContext *opts();
    Conditional_waveformsContext *conditional_waveforms();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_conditional_signal_assignmentContext* concurrent_conditional_signal_assignment();

  class  Concurrent_selected_signal_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_selected_signal_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SELECT();
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    OptsContext *opts();
    Selected_waveformsContext *selected_waveforms();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *TERNARY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_selected_signal_assignmentContext* concurrent_selected_signal_assignment();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  Condition_clauseContext : public antlr4::ParserRuleContext {
  public:
    Condition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNTIL();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_clauseContext* condition_clause();

  class  Conditional_signal_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Conditional_signal_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Conditional_waveform_assignmentContext *conditional_waveform_assignment();
    Conditional_force_assignmentContext *conditional_force_assignment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_signal_assignmentContext* conditional_signal_assignment();

  class  Conditional_waveform_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Conditional_waveform_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    Conditional_waveformsContext *conditional_waveforms();
    Delay_mechanismContext *delay_mechanism();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_waveform_assignmentContext* conditional_waveform_assignment();

  class  Conditional_force_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Conditional_force_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *FORCE();
    Conditional_expressionContext *conditional_expression();
    Force_modeContext *force_mode();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_force_assignmentContext* conditional_force_assignment();

  class  Conditional_waveformsContext : public antlr4::ParserRuleContext {
  public:
    Conditional_waveformsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WaveformContext *> waveform();
    WaveformContext* waveform(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_waveformsContext* conditional_waveforms();

  class  Conditional_expressionContext : public antlr4::ParserRuleContext {
  public:
    Conditional_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_expressionContext* conditional_expression();

  class  Configuration_declarationContext : public antlr4::ParserRuleContext {
  public:
    Configuration_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CONFIGURATION();
    antlr4::tree::TerminalNode* CONFIGURATION(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *OF();
    NameContext *name();
    antlr4::tree::TerminalNode *IS();
    Configuration_declarative_partContext *configuration_declarative_part();
    Block_configurationContext *block_configuration();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Configuration_declarationContext* configuration_declaration();

  class  Configuration_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Configuration_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Use_clauseContext *use_clause();
    Attribute_specificationContext *attribute_specification();
    Group_declarationContext *group_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Configuration_declarative_itemContext* configuration_declarative_item();

  class  Configuration_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Configuration_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Configuration_declarative_itemContext *> configuration_declarative_item();
    Configuration_declarative_itemContext* configuration_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Configuration_declarative_partContext* configuration_declarative_part();

  class  Configuration_itemContext : public antlr4::ParserRuleContext {
  public:
    Configuration_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_configurationContext *block_configuration();
    Component_configurationContext *component_configuration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Configuration_itemContext* configuration_item();

  class  Configuration_specificationContext : public antlr4::ParserRuleContext {
  public:
    Configuration_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Component_specificationContext *component_specification();
    Binding_indicationContext *binding_indication();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Configuration_specificationContext* configuration_specification();

  class  Constant_declarationContext : public antlr4::ParserRuleContext {
  public:
    Constant_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTANT();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_declarationContext* constant_declaration();

  class  Constrained_array_definitionContext : public antlr4::ParserRuleContext {
  public:
    Constrained_array_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    Index_constraintContext *index_constraint();
    antlr4::tree::TerminalNode *OF();
    Subtype_indicationContext *subtype_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constrained_array_definitionContext* constrained_array_definition();

  class  Constrained_nature_definitionContext : public antlr4::ParserRuleContext {
  public:
    Constrained_nature_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    Index_constraintContext *index_constraint();
    antlr4::tree::TerminalNode *OF();
    Subnature_indicationContext *subnature_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constrained_nature_definitionContext* constrained_nature_definition();

  class  ConstraintContext : public antlr4::ParserRuleContext {
  public:
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_constraintContext *range_constraint();
    Index_constraintContext *index_constraint();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintContext* constraint();

  class  Context_clauseContext : public antlr4::ParserRuleContext {
  public:
    Context_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Context_itemContext *> context_item();
    Context_itemContext* context_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Context_clauseContext* context_clause();

  class  Context_itemContext : public antlr4::ParserRuleContext {
  public:
    Context_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_clauseContext *library_clause();
    Use_clauseContext *use_clause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Context_itemContext* context_item();

  class  Delay_mechanismContext : public antlr4::ParserRuleContext {
  public:
    Delay_mechanismContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSPORT();
    antlr4::tree::TerminalNode *INERTIAL();
    antlr4::tree::TerminalNode *REJECT();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_mechanismContext* delay_mechanism();

  class  Design_fileContext : public antlr4::ParserRuleContext {
  public:
    Design_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Design_unitContext *> design_unit();
    Design_unitContext* design_unit(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Design_fileContext* design_file();

  class  Design_unitContext : public antlr4::ParserRuleContext {
  public:
    Design_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Context_clauseContext *context_clause();
    Library_unitContext *library_unit();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Design_unitContext* design_unit();

  class  DesignatorContext : public antlr4::ParserRuleContext {
  public:
    DesignatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DesignatorContext* designator();

  class  DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DOWNTO();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectionContext* direction();

  class  Disconnection_specificationContext : public antlr4::ParserRuleContext {
  public:
    Disconnection_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCONNECT();
    Guarded_signal_specificationContext *guarded_signal_specification();
    antlr4::tree::TerminalNode *AFTER();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Disconnection_specificationContext* disconnection_specification();

  class  Discrete_rangeContext : public antlr4::ParserRuleContext {
  public:
    Discrete_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RangeContext *range();
    Subtype_indicationContext *subtype_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Discrete_rangeContext* discrete_range();

  class  Element_associationContext : public antlr4::ParserRuleContext {
  public:
    Element_associationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ChoicesContext *choices();
    antlr4::tree::TerminalNode *ARROW();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Element_associationContext* element_association();

  class  Element_declarationContext : public antlr4::ParserRuleContext {
  public:
    Element_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Element_subtype_definitionContext *element_subtype_definition();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Element_declarationContext* element_declaration();

  class  Element_subnature_definitionContext : public antlr4::ParserRuleContext {
  public:
    Element_subnature_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subnature_indicationContext *subnature_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Element_subnature_definitionContext* element_subnature_definition();

  class  Element_subtype_definitionContext : public antlr4::ParserRuleContext {
  public:
    Element_subtype_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_indicationContext *subtype_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Element_subtype_definitionContext* element_subtype_definition();

  class  Entity_aspectContext : public antlr4::ParserRuleContext {
  public:
    Entity_aspectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTITY();
    NameContext *name();
    antlr4::tree::TerminalNode *LPAREN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *OPEN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_aspectContext* entity_aspect();

  class  Entity_classContext : public antlr4::ParserRuleContext {
  public:
    Entity_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTITY();
    antlr4::tree::TerminalNode *ARCHITECTURE();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *SUBTYPE();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *LITERAL();
    antlr4::tree::TerminalNode *UNITS();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *NATURE();
    antlr4::tree::TerminalNode *SUBNATURE();
    antlr4::tree::TerminalNode *QUANTITY();
    antlr4::tree::TerminalNode *TERMINAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_classContext* entity_class();

  class  Entity_class_entryContext : public antlr4::ParserRuleContext {
  public:
    Entity_class_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Entity_classContext *entity_class();
    antlr4::tree::TerminalNode *BOX();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_class_entryContext* entity_class_entry();

  class  Entity_class_entry_listContext : public antlr4::ParserRuleContext {
  public:
    Entity_class_entry_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Entity_class_entryContext *> entity_class_entry();
    Entity_class_entryContext* entity_class_entry(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_class_entry_listContext* entity_class_entry_list();

  class  Entity_declarationContext : public antlr4::ParserRuleContext {
  public:
    Entity_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENTITY();
    antlr4::tree::TerminalNode* ENTITY(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *IS();
    Entity_headerContext *entity_header();
    Entity_declarative_partContext *entity_declarative_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *BEGIN();
    Entity_statement_partContext *entity_statement_part();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_declarationContext* entity_declaration();

  class  Entity_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Entity_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Subprogram_bodyContext *subprogram_body();
    Type_declarationContext *type_declaration();
    Subtype_declarationContext *subtype_declaration();
    Constant_declarationContext *constant_declaration();
    Signal_declarationContext *signal_declaration();
    Variable_declarationContext *variable_declaration();
    File_declarationContext *file_declaration();
    Alias_declarationContext *alias_declaration();
    Attribute_declarationContext *attribute_declaration();
    Attribute_specificationContext *attribute_specification();
    Disconnection_specificationContext *disconnection_specification();
    Step_limit_specificationContext *step_limit_specification();
    Use_clauseContext *use_clause();
    Group_template_declarationContext *group_template_declaration();
    Group_declarationContext *group_declaration();
    Nature_declarationContext *nature_declaration();
    Subnature_declarationContext *subnature_declaration();
    Quantity_declarationContext *quantity_declaration();
    Terminal_declarationContext *terminal_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_declarative_itemContext* entity_declarative_item();

  class  Entity_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Entity_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Entity_declarative_itemContext *> entity_declarative_item();
    Entity_declarative_itemContext* entity_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_declarative_partContext* entity_declarative_part();

  class  Entity_designatorContext : public antlr4::ParserRuleContext {
  public:
    Entity_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Entity_tagContext *entity_tag();
    SignatureContext *signature();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_designatorContext* entity_designator();

  class  Entity_headerContext : public antlr4::ParserRuleContext {
  public:
    Entity_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generic_clauseContext *generic_clause();
    Port_clauseContext *port_clause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_headerContext* entity_header();

  class  Entity_name_listContext : public antlr4::ParserRuleContext {
  public:
    Entity_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Entity_designatorContext *> entity_designator();
    Entity_designatorContext* entity_designator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *ALL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_name_listContext* entity_name_list();

  class  Entity_specificationContext : public antlr4::ParserRuleContext {
  public:
    Entity_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Entity_name_listContext *entity_name_list();
    antlr4::tree::TerminalNode *COLON();
    Entity_classContext *entity_class();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_specificationContext* entity_specification();

  class  Entity_statementContext : public antlr4::ParserRuleContext {
  public:
    Entity_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_statementContext *concurrent_assertion_statement();
    Process_statementContext *process_statement();
    Concurrent_procedure_call_statementContext *concurrent_procedure_call_statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_statementContext* entity_statement();

  class  Entity_statement_partContext : public antlr4::ParserRuleContext {
  public:
    Entity_statement_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Entity_statementContext *> entity_statement();
    Entity_statementContext* entity_statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_statement_partContext* entity_statement_part();

  class  Entity_tagContext : public antlr4::ParserRuleContext {
  public:
    Entity_tagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CHARACTER_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Entity_tagContext* entity_tag();

  class  Enumeration_literalContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CHARACTER_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enumeration_literalContext* enumeration_literal();

  class  Enumeration_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Enumeration_literalContext *> enumeration_literal();
    Enumeration_literalContext* enumeration_literal(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enumeration_type_definitionContext* enumeration_type_definition();

  class  Exit_statementContext : public antlr4::ParserRuleContext {
  public:
    Exit_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *WHEN();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exit_statementContext* exit_statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITION_OPERATOR();
    PrimaryContext *primary();
    Logical_expressionContext *logical_expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Logical_expressionContext : public antlr4::ParserRuleContext {
  public:
    Logical_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationContext *> relation();
    RelationContext* relation(size_t i);
    std::vector<Logical_operatorContext *> logical_operator();
    Logical_operatorContext* logical_operator(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_expressionContext* logical_expression();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrimaryContext *> primary();
    PrimaryContext* primary(size_t i);
    antlr4::tree::TerminalNode *DOUBLESTAR();
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *NOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  File_declarationContext : public antlr4::ParserRuleContext {
  public:
    File_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *SEMI();
    File_open_informationContext *file_open_information();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_declarationContext* file_declaration();

  class  File_logical_nameContext : public antlr4::ParserRuleContext {
  public:
    File_logical_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_logical_nameContext* file_logical_name();

  class  File_open_informationContext : public antlr4::ParserRuleContext {
  public:
    File_open_informationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS();
    File_logical_nameContext *file_logical_name();
    antlr4::tree::TerminalNode *OPEN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_open_informationContext* file_open_information();

  class  File_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    File_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *OF();
    Subtype_indicationContext *subtype_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_type_definitionContext* file_type_definition();

  class  Formal_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Formal_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_listContext *interface_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formal_parameter_listContext* formal_parameter_list();

  class  Formal_partContext : public antlr4::ParserRuleContext {
  public:
    Formal_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Explicit_rangeContext *explicit_range();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formal_partContext* formal_part();

  class  Free_quantity_declarationContext : public antlr4::ParserRuleContext {
  public:
    Free_quantity_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUANTITY();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Free_quantity_declarationContext* free_quantity_declaration();

  class  Generate_statementContext : public antlr4::ParserRuleContext {
  public:
    Generate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_generate_statementContext *for_generate_statement();
    If_generate_statementContext *if_generate_statement();
    Case_generate_statementContext *case_generate_statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_statementContext* generate_statement();

  class  For_generate_statementContext : public antlr4::ParserRuleContext {
  public:
    For_generate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Label_colonContext *label_colon();
    antlr4::tree::TerminalNode *FOR();
    Parameter_specificationContext *parameter_specification();
    std::vector<antlr4::tree::TerminalNode *> GENERATE();
    antlr4::tree::TerminalNode* GENERATE(size_t i);
    Generate_statement_bodyContext *generate_statement_body();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_generate_statementContext* for_generate_statement();

  class  If_generate_statementContext : public antlr4::ParserRuleContext {
  public:
    If_generate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GENERATE();
    antlr4::tree::TerminalNode* GENERATE(size_t i);
    std::vector<Generate_statement_bodyContext *> generate_statement_body();
    Generate_statement_bodyContext* generate_statement_body(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    std::vector<antlr4::tree::TerminalNode *> ELSIF();
    antlr4::tree::TerminalNode* ELSIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_generate_statementContext* if_generate_statement();

  class  Case_generate_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> GENERATE();
    antlr4::tree::TerminalNode* GENERATE(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    std::vector<Case_generate_alternativeContext *> case_generate_alternative();
    Case_generate_alternativeContext* case_generate_alternative(size_t i);
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_generate_statementContext* case_generate_statement();

  class  Case_generate_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    ChoicesContext *choices();
    antlr4::tree::TerminalNode *ARROW();
    Generate_statement_bodyContext *generate_statement_body();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_generate_alternativeContext* case_generate_alternative();

  class  Generate_statement_bodyContext : public antlr4::ParserRuleContext {
  public:
    Generate_statement_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    std::vector<Architecture_statementContext *> architecture_statement();
    Architecture_statementContext* architecture_statement(size_t i);
    std::vector<Block_declarative_itemContext *> block_declarative_item();
    Block_declarative_itemContext* block_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_statement_bodyContext* generate_statement_body();

  class  Generation_schemeContext : public antlr4::ParserRuleContext {
  public:
    Generation_schemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Parameter_specificationContext *parameter_specification();
    antlr4::tree::TerminalNode *IF();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generation_schemeContext* generation_scheme();

  class  Generic_clauseContext : public antlr4::ParserRuleContext {
  public:
    Generic_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *LPAREN();
    Generic_listContext *generic_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generic_clauseContext* generic_clause();

  class  Generic_listContext : public antlr4::ParserRuleContext {
  public:
    Generic_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Interface_constant_declarationContext *> interface_constant_declaration();
    Interface_constant_declarationContext* interface_constant_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generic_listContext* generic_list();

  class  Generic_map_aspectContext : public antlr4::ParserRuleContext {
  public:
    Generic_map_aspectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *LPAREN();
    Association_listContext *association_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generic_map_aspectContext* generic_map_aspect();

  class  Group_constituentContext : public antlr4::ParserRuleContext {
  public:
    Group_constituentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *CHARACTER_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_constituentContext* group_constituent();

  class  Group_constituent_listContext : public antlr4::ParserRuleContext {
  public:
    Group_constituent_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Group_constituentContext *> group_constituent();
    Group_constituentContext* group_constituent(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_constituent_listContext* group_constituent_list();

  class  Group_declarationContext : public antlr4::ParserRuleContext {
  public:
    Group_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    Label_colonContext *label_colon();
    NameContext *name();
    antlr4::tree::TerminalNode *LPAREN();
    Group_constituent_listContext *group_constituent_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_declarationContext* group_declaration();

  class  Group_template_declarationContext : public antlr4::ParserRuleContext {
  public:
    Group_template_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *LPAREN();
    Entity_class_entry_listContext *entity_class_entry_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_template_declarationContext* group_template_declaration();

  class  Guarded_signal_specificationContext : public antlr4::ParserRuleContext {
  public:
    Guarded_signal_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Signal_listContext *signal_list();
    antlr4::tree::TerminalNode *COLON();
    NameContext *name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Guarded_signal_specificationContext* guarded_signal_specification();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_IDENTIFIER();
    antlr4::tree::TerminalNode *EXTENDED_IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  Identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_listContext* identifier_list();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<Sequence_of_statementsContext *> sequence_of_statements();
    Sequence_of_statementsContext* sequence_of_statements(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    std::vector<antlr4::tree::TerminalNode *> ELSIF();
    antlr4::tree::TerminalNode* ELSIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  Index_constraintContext : public antlr4::ParserRuleContext {
  public:
    Index_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Discrete_rangeContext *> discrete_range();
    Discrete_rangeContext* discrete_range(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_constraintContext* index_constraint();

  class  Index_specificationContext : public antlr4::ParserRuleContext {
  public:
    Index_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Discrete_rangeContext *discrete_range();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_specificationContext* index_specification();

  class  Index_subtype_definitionContext : public antlr4::ParserRuleContext {
  public:
    Index_subtype_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *BOX();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_subtype_definitionContext* index_subtype_definition();

  class  Instantiated_unitContext : public antlr4::ParserRuleContext {
  public:
    Instantiated_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *ENTITY();
    antlr4::tree::TerminalNode *LPAREN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *CONFIGURATION();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Instantiated_unitContext* instantiated_unit();

  class  Instantiation_listContext : public antlr4::ParserRuleContext {
  public:
    Instantiation_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *ALL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Instantiation_listContext* instantiation_list();

  class  Interface_constant_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_constant_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_constant_declarationContext* interface_constant_declaration();

  class  Interface_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_constant_declarationContext *interface_constant_declaration();
    Interface_signal_declarationContext *interface_signal_declaration();
    Interface_variable_declarationContext *interface_variable_declaration();
    Interface_file_declarationContext *interface_file_declaration();
    Interface_terminal_declarationContext *interface_terminal_declaration();
    Interface_quantity_declarationContext *interface_quantity_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_declarationContext* interface_declaration();

  class  Interface_elementContext : public antlr4::ParserRuleContext {
  public:
    Interface_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_declarationContext *interface_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_elementContext* interface_element();

  class  Interface_file_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_file_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_file_declarationContext* interface_file_declaration();

  class  Interface_signal_listContext : public antlr4::ParserRuleContext {
  public:
    Interface_signal_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Interface_signal_declarationContext *> interface_signal_declaration();
    Interface_signal_declarationContext* interface_signal_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_signal_listContext* interface_signal_list();

  class  Interface_port_listContext : public antlr4::ParserRuleContext {
  public:
    Interface_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Interface_port_declarationContext *> interface_port_declaration();
    Interface_port_declarationContext* interface_port_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_port_listContext* interface_port_list();

  class  Interface_listContext : public antlr4::ParserRuleContext {
  public:
    Interface_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Interface_elementContext *> interface_element();
    Interface_elementContext* interface_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_listContext* interface_list();

  class  Interface_quantity_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_quantity_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUANTITY();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_quantity_declarationContext* interface_quantity_declaration();

  class  Interface_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Signal_modeContext *signal_mode();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *BUS();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_port_declarationContext* interface_port_declaration();

  class  Interface_signal_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_signal_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *BUS();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_signal_declarationContext* interface_signal_declaration();

  class  Interface_terminal_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_terminal_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINAL();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subnature_indicationContext *subnature_indication();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_terminal_declarationContext* interface_terminal_declaration();

  class  Interface_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *VARIABLE();
    Signal_modeContext *signal_mode();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_variable_declarationContext* interface_variable_declaration();

  class  Iteration_schemeContext : public antlr4::ParserRuleContext {
  public:
    Iteration_schemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *FOR();
    Parameter_specificationContext *parameter_specification();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Iteration_schemeContext* iteration_scheme();

  class  Label_colonContext : public antlr4::ParserRuleContext {
  public:
    Label_colonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Label_colonContext* label_colon();

  class  Library_clauseContext : public antlr4::ParserRuleContext {
  public:
    Library_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBRARY();
    Logical_name_listContext *logical_name_list();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_clauseContext* library_clause();

  class  Library_unitContext : public antlr4::ParserRuleContext {
  public:
    Library_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Secondary_unitContext *secondary_unit();
    Primary_unitContext *primary_unit();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_unitContext* library_unit();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_SYM();
    antlr4::tree::TerminalNode *BIT_STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    Enumeration_literalContext *enumeration_literal();
    Numeric_literalContext *numeric_literal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  Logical_nameContext : public antlr4::ParserRuleContext {
  public:
    Logical_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_nameContext* logical_name();

  class  Logical_name_listContext : public antlr4::ParserRuleContext {
  public:
    Logical_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Logical_nameContext *> logical_name();
    Logical_nameContext* logical_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_name_listContext* logical_name_list();

  class  Logical_operatorContext : public antlr4::ParserRuleContext {
  public:
    Logical_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *NAND();
    antlr4::tree::TerminalNode *NOR();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *XNOR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_operatorContext* logical_operator();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    Sequence_of_statementsContext *sequence_of_statements();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    Iteration_schemeContext *iteration_scheme();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_statementContext* loop_statement();

  class  Signal_modeContext : public antlr4::ParserRuleContext {
  public:
    Signal_modeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *LINKAGE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_modeContext* signal_mode();

  class  Multiplying_operatorContext : public antlr4::ParserRuleContext {
  public:
    Multiplying_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *REM();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplying_operatorContext* multiplying_operator();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Selected_nameContext *selected_name();
    std::vector<Name_partContext *> name_part();
    Name_partContext* name_part(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  Name_partContext : public antlr4::ParserRuleContext {
  public:
    Name_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Selected_nameContext *selected_name();
    std::vector<Name_part_specificatorContext *> name_part_specificator();
    Name_part_specificatorContext* name_part_specificator(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_partContext* name_part();

  class  Name_part_specificatorContext : public antlr4::ParserRuleContext {
  public:
    Name_part_specificatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_attribute_partContext *name_attribute_part();
    Name_function_call_or_indexed_partContext *name_function_call_or_indexed_part();
    Name_slice_partContext *name_slice_part();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_part_specificatorContext* name_part_specificator();

  class  Name_attribute_partContext : public antlr4::ParserRuleContext {
  public:
    Name_attribute_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *APOSTROPHE();
    Attribute_designatorContext *attribute_designator();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_attribute_partContext* name_attribute_part();

  class  Name_function_call_or_indexed_partContext : public antlr4::ParserRuleContext {
  public:
    Name_function_call_or_indexed_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Actual_parameter_partContext *actual_parameter_part();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_function_call_or_indexed_partContext* name_function_call_or_indexed_part();

  class  Name_slice_partContext : public antlr4::ParserRuleContext {
  public:
    Name_slice_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Explicit_rangeContext *> explicit_range();
    Explicit_rangeContext* explicit_range(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_slice_partContext* name_slice_part();

  class  Selected_nameContext : public antlr4::ParserRuleContext {
  public:
    Selected_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<SuffixContext *> suffix();
    SuffixContext* suffix(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selected_nameContext* selected_name();

  class  Nature_declarationContext : public antlr4::ParserRuleContext {
  public:
    Nature_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NATURE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IS();
    Nature_definitionContext *nature_definition();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nature_declarationContext* nature_declaration();

  class  Nature_definitionContext : public antlr4::ParserRuleContext {
  public:
    Nature_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scalar_nature_definitionContext *scalar_nature_definition();
    Composite_nature_definitionContext *composite_nature_definition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nature_definitionContext* nature_definition();

  class  Nature_element_declarationContext : public antlr4::ParserRuleContext {
  public:
    Nature_element_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Element_subnature_definitionContext *element_subnature_definition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nature_element_declarationContext* nature_element_declaration();

  class  Next_statementContext : public antlr4::ParserRuleContext {
  public:
    Next_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *WHEN();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Next_statementContext* next_statement();

  class  Numeric_literalContext : public antlr4::ParserRuleContext {
  public:
    Numeric_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Abstract_literalContext *abstract_literal();
    Physical_literalContext *physical_literal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Numeric_literalContext* numeric_literal();

  class  Object_declarationContext : public antlr4::ParserRuleContext {
  public:
    Object_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_declarationContext *constant_declaration();
    Signal_declarationContext *signal_declaration();
    Variable_declarationContext *variable_declaration();
    File_declarationContext *file_declaration();
    Terminal_declarationContext *terminal_declaration();
    Quantity_declarationContext *quantity_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_declarationContext* object_declaration();

  class  OptsContext : public antlr4::ParserRuleContext {
  public:
    OptsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GUARDED();
    Delay_mechanismContext *delay_mechanism();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptsContext* opts();

  class  Package_bodyContext : public antlr4::ParserRuleContext {
  public:
    Package_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> PACKAGE();
    antlr4::tree::TerminalNode* PACKAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BODY();
    antlr4::tree::TerminalNode* BODY(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *IS();
    Package_body_declarative_partContext *package_body_declarative_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_bodyContext* package_body();

  class  Package_body_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_body_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Subprogram_bodyContext *subprogram_body();
    Type_declarationContext *type_declaration();
    Subtype_declarationContext *subtype_declaration();
    Constant_declarationContext *constant_declaration();
    Variable_declarationContext *variable_declaration();
    File_declarationContext *file_declaration();
    Alias_declarationContext *alias_declaration();
    Use_clauseContext *use_clause();
    Group_template_declarationContext *group_template_declaration();
    Group_declarationContext *group_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_body_declarative_itemContext* package_body_declarative_item();

  class  Package_body_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Package_body_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Package_body_declarative_itemContext *> package_body_declarative_item();
    Package_body_declarative_itemContext* package_body_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_body_declarative_partContext* package_body_declarative_part();

  class  Package_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> PACKAGE();
    antlr4::tree::TerminalNode* PACKAGE(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *IS();
    Package_declarative_partContext *package_declarative_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_declarationContext* package_declaration();

  class  Package_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Type_declarationContext *type_declaration();
    Subtype_declarationContext *subtype_declaration();
    Constant_declarationContext *constant_declaration();
    Signal_declarationContext *signal_declaration();
    Variable_declarationContext *variable_declaration();
    File_declarationContext *file_declaration();
    Alias_declarationContext *alias_declaration();
    Component_declarationContext *component_declaration();
    Attribute_declarationContext *attribute_declaration();
    Attribute_specificationContext *attribute_specification();
    Disconnection_specificationContext *disconnection_specification();
    Use_clauseContext *use_clause();
    Group_template_declarationContext *group_template_declaration();
    Group_declarationContext *group_declaration();
    Nature_declarationContext *nature_declaration();
    Subnature_declarationContext *subnature_declaration();
    Terminal_declarationContext *terminal_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_declarative_itemContext* package_declarative_item();

  class  Package_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Package_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Package_declarative_itemContext *> package_declarative_item();
    Package_declarative_itemContext* package_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_declarative_partContext* package_declarative_part();

  class  Parameter_specificationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IN();
    Discrete_rangeContext *discrete_range();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_specificationContext* parameter_specification();

  class  Physical_literalContext : public antlr4::ParserRuleContext {
  public:
    Physical_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Abstract_literalContext *abstract_literal();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Physical_literalContext* physical_literal();

  class  Physical_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Physical_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_constraintContext *range_constraint();
    std::vector<antlr4::tree::TerminalNode *> UNITS();
    antlr4::tree::TerminalNode* UNITS(size_t i);
    Base_unit_declarationContext *base_unit_declaration();
    antlr4::tree::TerminalNode *END();
    std::vector<Secondary_unit_declarationContext *> secondary_unit_declaration();
    Secondary_unit_declarationContext* secondary_unit_declaration(size_t i);
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Physical_type_definitionContext* physical_type_definition();

  class  Port_clauseContext : public antlr4::ParserRuleContext {
  public:
    Port_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *LPAREN();
    Port_listContext *port_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_clauseContext* port_clause();

  class  Port_listContext : public antlr4::ParserRuleContext {
  public:
    Port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_port_listContext *interface_port_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_listContext* port_list();

  class  Port_map_aspectContext : public antlr4::ParserRuleContext {
  public:
    Port_map_aspectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *LPAREN();
    Association_listContext *association_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_map_aspectContext* port_map_aspect();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    Qualified_expressionContext *qualified_expression();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    AllocatorContext *allocator();
    AggregateContext *aggregate();
    NameContext *name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class  Primary_unitContext : public antlr4::ParserRuleContext {
  public:
    Primary_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Entity_declarationContext *entity_declaration();
    Configuration_declarationContext *configuration_declaration();
    Package_declarationContext *package_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_unitContext* primary_unit();

  class  Procedural_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Procedural_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Subprogram_bodyContext *subprogram_body();
    Type_declarationContext *type_declaration();
    Subtype_declarationContext *subtype_declaration();
    Constant_declarationContext *constant_declaration();
    Variable_declarationContext *variable_declaration();
    Alias_declarationContext *alias_declaration();
    Attribute_declarationContext *attribute_declaration();
    Attribute_specificationContext *attribute_specification();
    Use_clauseContext *use_clause();
    Group_template_declarationContext *group_template_declaration();
    Group_declarationContext *group_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_declarative_itemContext* procedural_declarative_item();

  class  Procedural_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Procedural_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Procedural_declarative_itemContext *> procedural_declarative_item();
    Procedural_declarative_itemContext* procedural_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_declarative_partContext* procedural_declarative_part();

  class  Procedural_statement_partContext : public antlr4::ParserRuleContext {
  public:
    Procedural_statement_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequential_statementContext *> sequential_statement();
    Sequential_statementContext* sequential_statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_statement_partContext* procedural_statement_part();

  class  Procedure_callContext : public antlr4::ParserRuleContext {
  public:
    Procedure_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Selected_nameContext *selected_name();
    antlr4::tree::TerminalNode *LPAREN();
    Actual_parameter_partContext *actual_parameter_part();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_callContext* procedure_call();

  class  Procedure_call_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedure_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_callContext *procedure_call();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_call_statementContext* procedure_call_statement();

  class  Process_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Process_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Subprogram_bodyContext *subprogram_body();
    Type_declarationContext *type_declaration();
    Subtype_declarationContext *subtype_declaration();
    Constant_declarationContext *constant_declaration();
    Variable_declarationContext *variable_declaration();
    File_declarationContext *file_declaration();
    Alias_declarationContext *alias_declaration();
    Attribute_declarationContext *attribute_declaration();
    Attribute_specificationContext *attribute_specification();
    Use_clauseContext *use_clause();
    Group_template_declarationContext *group_template_declaration();
    Group_declarationContext *group_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Process_declarative_itemContext* process_declarative_item();

  class  Process_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Process_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Process_declarative_itemContext *> process_declarative_item();
    Process_declarative_itemContext* process_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Process_declarative_partContext* process_declarative_part();

  class  Process_statementContext : public antlr4::ParserRuleContext {
  public:
    Process_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> PROCESS();
    antlr4::tree::TerminalNode* PROCESS(size_t i);
    Process_declarative_partContext *process_declarative_part();
    antlr4::tree::TerminalNode *BEGIN();
    Process_statement_partContext *process_statement_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    std::vector<antlr4::tree::TerminalNode *> POSTPONED();
    antlr4::tree::TerminalNode* POSTPONED(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    Sensitivity_listContext *sensitivity_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *IS();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Process_statementContext* process_statement();

  class  Process_statement_partContext : public antlr4::ParserRuleContext {
  public:
    Process_statement_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequential_statementContext *> sequential_statement();
    Sequential_statementContext* sequential_statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Process_statement_partContext* process_statement_part();

  class  Qualified_expressionContext : public antlr4::ParserRuleContext {
  public:
    Qualified_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *APOSTROPHE();
    AggregateContext *aggregate();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qualified_expressionContext* qualified_expression();

  class  Quantity_declarationContext : public antlr4::ParserRuleContext {
  public:
    Quantity_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Free_quantity_declarationContext *free_quantity_declaration();
    Branch_quantity_declarationContext *branch_quantity_declaration();
    Source_quantity_declarationContext *source_quantity_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Quantity_declarationContext* quantity_declaration();

  class  Quantity_listContext : public antlr4::ParserRuleContext {
  public:
    Quantity_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *ALL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Quantity_listContext* quantity_list();

  class  Quantity_specificationContext : public antlr4::ParserRuleContext {
  public:
    Quantity_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Quantity_listContext *quantity_list();
    antlr4::tree::TerminalNode *COLON();
    NameContext *name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Quantity_specificationContext* quantity_specification();

  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Explicit_rangeContext *explicit_range();
    NameContext *name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeContext* range();

  class  Explicit_rangeContext : public antlr4::ParserRuleContext {
  public:
    Explicit_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    DirectionContext *direction();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explicit_rangeContext* explicit_range();

  class  Range_constraintContext : public antlr4::ParserRuleContext {
  public:
    Range_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE();
    RangeContext *range();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_constraintContext* range_constraint();

  class  Record_nature_definitionContext : public antlr4::ParserRuleContext {
  public:
    Record_nature_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RECORD();
    antlr4::tree::TerminalNode* RECORD(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<Nature_element_declarationContext *> nature_element_declaration();
    Nature_element_declarationContext* nature_element_declaration(size_t i);
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Record_nature_definitionContext* record_nature_definition();

  class  Record_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Record_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RECORD();
    antlr4::tree::TerminalNode* RECORD(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<Element_declarationContext *> element_declaration();
    Element_declarationContext* element_declaration(size_t i);
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Record_type_definitionContext* record_type_definition();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Shift_expressionContext *> shift_expression();
    Shift_expressionContext* shift_expression(size_t i);
    Relational_operatorContext *relational_operator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationContext* relation();

  class  Relational_operatorContext : public antlr4::ParserRuleContext {
  public:
    Relational_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *LOWERTHAN();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GREATERTHAN();
    antlr4::tree::TerminalNode *GE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_operatorContext* relational_operator();

  class  Report_statementContext : public antlr4::ParserRuleContext {
  public:
    Report_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPORT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    antlr4::tree::TerminalNode *SEVERITY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Report_statementContext* report_statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  Scalar_nature_definitionContext : public antlr4::ParserRuleContext {
  public:
    Scalar_nature_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *ACROSS();
    antlr4::tree::TerminalNode *THROUGH();
    antlr4::tree::TerminalNode *REFERENCE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_nature_definitionContext* scalar_nature_definition();

  class  Scalar_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Scalar_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Physical_type_definitionContext *physical_type_definition();
    Enumeration_type_definitionContext *enumeration_type_definition();
    Range_constraintContext *range_constraint();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_type_definitionContext* scalar_type_definition();

  class  Secondary_unitContext : public antlr4::ParserRuleContext {
  public:
    Secondary_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Architecture_bodyContext *architecture_body();
    Package_bodyContext *package_body();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Secondary_unitContext* secondary_unit();

  class  Secondary_unit_declarationContext : public antlr4::ParserRuleContext {
  public:
    Secondary_unit_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    Physical_literalContext *physical_literal();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Secondary_unit_declarationContext* secondary_unit_declaration();

  class  Selected_signal_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Selected_signal_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SELECT();
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    OptsContext *opts();
    Selected_waveformsContext *selected_waveforms();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *TERNARY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selected_signal_assignmentContext* selected_signal_assignment();

  class  Selected_waveformsContext : public antlr4::ParserRuleContext {
  public:
    Selected_waveformsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WaveformContext *> waveform();
    WaveformContext* waveform(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<ChoicesContext *> choices();
    ChoicesContext* choices(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selected_waveformsContext* selected_waveforms();

  class  Sensitivity_clauseContext : public antlr4::ParserRuleContext {
  public:
    Sensitivity_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    Sensitivity_listContext *sensitivity_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sensitivity_clauseContext* sensitivity_clause();

  class  Sensitivity_listContext : public antlr4::ParserRuleContext {
  public:
    Sensitivity_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sensitivity_listContext* sensitivity_list();

  class  Sequence_of_statementsContext : public antlr4::ParserRuleContext {
  public:
    Sequence_of_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequential_statementContext *> sequential_statement();
    Sequential_statementContext* sequential_statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_of_statementsContext* sequence_of_statements();

  class  Sequential_statementContext : public antlr4::ParserRuleContext {
  public:
    Sequential_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Wait_statementContext *wait_statement();
    Assertion_statementContext *assertion_statement();
    Report_statementContext *report_statement();
    Signal_assignment_statementContext *signal_assignment_statement();
    Variable_assignment_statementContext *variable_assignment_statement();
    If_statementContext *if_statement();
    Case_statementContext *case_statement();
    Loop_statementContext *loop_statement();
    Next_statementContext *next_statement();
    Exit_statementContext *exit_statement();
    Return_statementContext *return_statement();
    antlr4::tree::TerminalNode *NULL_SYM();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    Break_statementContext *break_statement();
    Procedure_call_statementContext *procedure_call_statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequential_statementContext* sequential_statement();

  class  Shift_expressionContext : public antlr4::ParserRuleContext {
  public:
    Shift_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    Shift_operatorContext *shift_operator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Shift_expressionContext* shift_expression();

  class  Shift_operatorContext : public antlr4::ParserRuleContext {
  public:
    Shift_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SLL();
    antlr4::tree::TerminalNode *SRL();
    antlr4::tree::TerminalNode *SLA();
    antlr4::tree::TerminalNode *SRA();
    antlr4::tree::TerminalNode *ROL();
    antlr4::tree::TerminalNode *ROR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Shift_operatorContext* shift_operator();

  class  Signal_assignment_statementContext : public antlr4::ParserRuleContext {
  public:
    Signal_assignment_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_signal_assignmentContext *simple_signal_assignment();
    Label_colonContext *label_colon();
    Conditional_signal_assignmentContext *conditional_signal_assignment();
    Selected_signal_assignmentContext *selected_signal_assignment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_assignment_statementContext* signal_assignment_statement();

  class  Simple_signal_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Simple_signal_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_waveform_assignmentContext *simple_waveform_assignment();
    Simple_force_assignmentContext *simple_force_assignment();
    Simple_release_assignmentContext *simple_release_assignment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_signal_assignmentContext* simple_signal_assignment();

  class  Simple_waveform_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Simple_waveform_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    WaveformContext *waveform();
    antlr4::tree::TerminalNode *SEMI();
    Delay_mechanismContext *delay_mechanism();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_waveform_assignmentContext* simple_waveform_assignment();

  class  Simple_force_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Simple_force_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *FORCE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();
    Force_modeContext *force_mode();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_force_assignmentContext* simple_force_assignment();

  class  Simple_release_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Simple_release_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *SEMI();
    Force_modeContext *force_mode();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_release_assignmentContext* simple_release_assignment();

  class  Force_modeContext : public antlr4::ParserRuleContext {
  public:
    Force_modeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Force_modeContext* force_mode();

  class  Signal_declarationContext : public antlr4::ParserRuleContext {
  public:
    Signal_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *SEMI();
    Signal_kindContext *signal_kind();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_declarationContext* signal_declaration();

  class  Signal_kindContext : public antlr4::ParserRuleContext {
  public:
    Signal_kindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REGISTER();
    antlr4::tree::TerminalNode *BUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_kindContext* signal_kind();

  class  Signal_listContext : public antlr4::ParserRuleContext {
  public:
    Signal_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *ALL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_listContext* signal_list();

  class  SignatureContext : public antlr4::ParserRuleContext {
  public:
    SignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *RETURN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignatureContext* signature();

  class  Simple_expressionContext : public antlr4::ParserRuleContext {
  public:
    Simple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<Adding_operatorContext *> adding_operator();
    Adding_operatorContext* adding_operator(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_expressionContext* simple_expression();

  class  Simple_simultaneous_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_simultaneous_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    Tolerance_aspectContext *tolerance_aspect();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_simultaneous_statementContext* simple_simultaneous_statement();

  class  Simultaneous_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Simultaneous_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    ChoicesContext *choices();
    antlr4::tree::TerminalNode *ARROW();
    Simultaneous_statement_partContext *simultaneous_statement_part();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simultaneous_alternativeContext* simultaneous_alternative();

  class  Simultaneous_case_statementContext : public antlr4::ParserRuleContext {
  public:
    Simultaneous_case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    std::vector<Simultaneous_alternativeContext *> simultaneous_alternative();
    Simultaneous_alternativeContext* simultaneous_alternative(size_t i);
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simultaneous_case_statementContext* simultaneous_case_statement();

  class  Simultaneous_if_statementContext : public antlr4::ParserRuleContext {
  public:
    Simultaneous_if_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> USE();
    antlr4::tree::TerminalNode* USE(size_t i);
    std::vector<Simultaneous_statement_partContext *> simultaneous_statement_part();
    Simultaneous_statement_partContext* simultaneous_statement_part(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    std::vector<antlr4::tree::TerminalNode *> ELSIF();
    antlr4::tree::TerminalNode* ELSIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simultaneous_if_statementContext* simultaneous_if_statement();

  class  Simultaneous_procedural_statementContext : public antlr4::ParserRuleContext {
  public:
    Simultaneous_procedural_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> PROCEDURAL();
    antlr4::tree::TerminalNode* PROCEDURAL(size_t i);
    Procedural_declarative_partContext *procedural_declarative_part();
    antlr4::tree::TerminalNode *BEGIN();
    Procedural_statement_partContext *procedural_statement_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    antlr4::tree::TerminalNode *IS();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simultaneous_procedural_statementContext* simultaneous_procedural_statement();

  class  Simultaneous_statementContext : public antlr4::ParserRuleContext {
  public:
    Simultaneous_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_simultaneous_statementContext *simple_simultaneous_statement();
    Simultaneous_if_statementContext *simultaneous_if_statement();
    Simultaneous_case_statementContext *simultaneous_case_statement();
    Simultaneous_procedural_statementContext *simultaneous_procedural_statement();
    antlr4::tree::TerminalNode *NULL_SYM();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simultaneous_statementContext* simultaneous_statement();

  class  Simultaneous_statement_partContext : public antlr4::ParserRuleContext {
  public:
    Simultaneous_statement_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simultaneous_statementContext *> simultaneous_statement();
    Simultaneous_statementContext* simultaneous_statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simultaneous_statement_partContext* simultaneous_statement_part();

  class  Source_aspectContext : public antlr4::ParserRuleContext {
  public:
    Source_aspectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECTRUM();
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *NOISE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_aspectContext* source_aspect();

  class  Source_quantity_declarationContext : public antlr4::ParserRuleContext {
  public:
    Source_quantity_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUANTITY();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    Source_aspectContext *source_aspect();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_quantity_declarationContext* source_quantity_declaration();

  class  Step_limit_specificationContext : public antlr4::ParserRuleContext {
  public:
    Step_limit_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    Quantity_specificationContext *quantity_specification();
    antlr4::tree::TerminalNode *WITH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Step_limit_specificationContext* step_limit_specification();

  class  Subnature_declarationContext : public antlr4::ParserRuleContext {
  public:
    Subnature_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBNATURE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IS();
    Subnature_indicationContext *subnature_indication();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subnature_declarationContext* subnature_declaration();

  class  Subnature_indicationContext : public antlr4::ParserRuleContext {
  public:
    Subnature_indicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Index_constraintContext *index_constraint();
    antlr4::tree::TerminalNode *TOLERANCE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ACROSS();
    antlr4::tree::TerminalNode *THROUGH();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subnature_indicationContext* subnature_indication();

  class  Subprogram_bodyContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *IS();
    Subprogram_declarative_partContext *subprogram_declarative_part();
    antlr4::tree::TerminalNode *BEGIN();
    Subprogram_statement_partContext *subprogram_statement_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Subprogram_kindContext *subprogram_kind();
    DesignatorContext *designator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_bodyContext* subprogram_body();

  class  Subprogram_declarationContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_declarationContext* subprogram_declaration();

  class  Subprogram_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Subprogram_bodyContext *subprogram_body();
    Type_declarationContext *type_declaration();
    Subtype_declarationContext *subtype_declaration();
    Constant_declarationContext *constant_declaration();
    Variable_declarationContext *variable_declaration();
    File_declarationContext *file_declaration();
    Alias_declarationContext *alias_declaration();
    Attribute_declarationContext *attribute_declaration();
    Attribute_specificationContext *attribute_specification();
    Use_clauseContext *use_clause();
    Group_template_declarationContext *group_template_declaration();
    Group_declarationContext *group_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_declarative_itemContext* subprogram_declarative_item();

  class  Subprogram_declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Subprogram_declarative_itemContext *> subprogram_declarative_item();
    Subprogram_declarative_itemContext* subprogram_declarative_item(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_declarative_partContext* subprogram_declarative_part();

  class  Subprogram_kindContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_kindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *FUNCTION();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_kindContext* subprogram_kind();

  class  Subprogram_specificationContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_specificationContext *procedure_specification();
    Function_specificationContext *function_specification();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_specificationContext* subprogram_specification();

  class  Procedure_specificationContext : public antlr4::ParserRuleContext {
  public:
    Procedure_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    DesignatorContext *designator();
    antlr4::tree::TerminalNode *LPAREN();
    Formal_parameter_listContext *formal_parameter_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_specificationContext* procedure_specification();

  class  Function_specificationContext : public antlr4::ParserRuleContext {
  public:
    Function_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    DesignatorContext *designator();
    antlr4::tree::TerminalNode *RETURN();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *LPAREN();
    Formal_parameter_listContext *formal_parameter_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *PURE();
    antlr4::tree::TerminalNode *IMPURE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_specificationContext* function_specification();

  class  Subprogram_statement_partContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_statement_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequential_statementContext *> sequential_statement();
    Sequential_statementContext* sequential_statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_statement_partContext* subprogram_statement_part();

  class  Subtype_declarationContext : public antlr4::ParserRuleContext {
  public:
    Subtype_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBTYPE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IS();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subtype_declarationContext* subtype_declaration();

  class  Subtype_indicationContext : public antlr4::ParserRuleContext {
  public:
    Subtype_indicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Selected_nameContext *> selected_name();
    Selected_nameContext* selected_name(size_t i);
    ConstraintContext *constraint();
    Tolerance_aspectContext *tolerance_aspect();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subtype_indicationContext* subtype_indication();

  class  SuffixContext : public antlr4::ParserRuleContext {
  public:
    SuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CHARACTER_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ALL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuffixContext* suffix();

  class  TargetContext : public antlr4::ParserRuleContext {
  public:
    TargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    AggregateContext *aggregate();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetContext* target();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Multiplying_operatorContext *> multiplying_operator();
    Multiplying_operatorContext* multiplying_operator(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  Terminal_aspectContext : public antlr4::ParserRuleContext {
  public:
    Terminal_aspectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *TO();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminal_aspectContext* terminal_aspect();

  class  Terminal_declarationContext : public antlr4::ParserRuleContext {
  public:
    Terminal_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINAL();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subnature_indicationContext *subnature_indication();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminal_declarationContext* terminal_declaration();

  class  Through_aspectContext : public antlr4::ParserRuleContext {
  public:
    Through_aspectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *THROUGH();
    Tolerance_aspectContext *tolerance_aspect();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Through_aspectContext* through_aspect();

  class  Timeout_clauseContext : public antlr4::ParserRuleContext {
  public:
    Timeout_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timeout_clauseContext* timeout_clause();

  class  Tolerance_aspectContext : public antlr4::ParserRuleContext {
  public:
    Tolerance_aspectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOLERANCE();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tolerance_aspectContext* tolerance_aspect();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *IS();
    Type_definitionContext *type_definition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declarationContext* type_declaration();

  class  Type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scalar_type_definitionContext *scalar_type_definition();
    Composite_type_definitionContext *composite_type_definition();
    Access_type_definitionContext *access_type_definition();
    File_type_definitionContext *file_type_definition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_definitionContext* type_definition();

  class  Unconstrained_array_definitionContext : public antlr4::ParserRuleContext {
  public:
    Unconstrained_array_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Index_subtype_definitionContext *> index_subtype_definition();
    Index_subtype_definitionContext* index_subtype_definition(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *OF();
    Subtype_indicationContext *subtype_indication();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unconstrained_array_definitionContext* unconstrained_array_definition();

  class  Unconstrained_nature_definitionContext : public antlr4::ParserRuleContext {
  public:
    Unconstrained_nature_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Index_subtype_definitionContext *> index_subtype_definition();
    Index_subtype_definitionContext* index_subtype_definition(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *OF();
    Subnature_indicationContext *subnature_indication();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unconstrained_nature_definitionContext* unconstrained_nature_definition();

  class  Use_clauseContext : public antlr4::ParserRuleContext {
  public:
    Use_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    std::vector<Selected_nameContext *> selected_name();
    Selected_nameContext* selected_name(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_clauseContext* use_clause();

  class  Variable_assignment_statementContext : public antlr4::ParserRuleContext {
  public:
    Variable_assignment_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_variable_assignmentContext *simple_variable_assignment();
    Label_colonContext *label_colon();
    Conditional_variable_assignmentContext *conditional_variable_assignment();
    Selected_variable_assignmentContext *selected_variable_assignment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_assignment_statementContext* variable_assignment_statement();

  class  Simple_variable_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Simple_variable_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_variable_assignmentContext* simple_variable_assignment();

  class  Conditional_variable_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Conditional_variable_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *VARASGN();
    Conditional_expressionContext *conditional_expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_variable_assignmentContext* conditional_variable_assignment();

  class  Selected_variable_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Selected_variable_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *TERNARY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selected_variable_assignmentContext* selected_variable_assignment();

  class  Variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *VARASGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declarationContext* variable_declaration();

  class  Wait_statementContext : public antlr4::ParserRuleContext {
  public:
    Wait_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *SEMI();
    Label_colonContext *label_colon();
    Sensitivity_clauseContext *sensitivity_clause();
    Condition_clauseContext *condition_clause();
    Timeout_clauseContext *timeout_clause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wait_statementContext* wait_statement();

  class  WaveformContext : public antlr4::ParserRuleContext {
  public:
    WaveformContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Waveform_elementContext *> waveform_element();
    Waveform_elementContext* waveform_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *UNAFFECTED();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WaveformContext* waveform();

  class  Waveform_elementContext : public antlr4::ParserRuleContext {
  public:
    Waveform_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AFTER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Waveform_elementContext* waveform_element();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace vhdl
