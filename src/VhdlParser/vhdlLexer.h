
// Generated from grammars/vhdl.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace vhdl {


class  vhdlLexer : public antlr4::Lexer {
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

  vhdlLexer(antlr4::CharStream *input);
  ~vhdlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace vhdl
