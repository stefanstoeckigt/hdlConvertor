from enum import Enum
from typing import Optional, Union, List


class HdlDirection(Enum):
    """
    Direction of the interface
    """
    (IN,
    OUT,
    INOUT,
    BUFFER,
    LINKAGE,
    INTERNAL,
    UNKNOWN) = range(7)


class HdlName(str):
    """
    String which is id in HDL
    """
    __slots__ = []


class HdlAll(object):
    """
    Constant which corresponds to VHDL "all" keyword
    or "*" in Verilog sensitivity list
    """
    __slots__ = []
    def __init__(self):
        raise ValueError("This class (%s) is not supposed to be instantiated" % repr(self.__class__))


class HdlOthers(object):
    """
    Constant which corresponds to VHDL "others" keyword
    """
    __slots__ = []
    def __init__(self):
        raise ValueError("This class (%s) is not supposed to be instantiated" % repr(self.__class__))


class HdlTypeType(object):
    """
    Type which means that the object is type of type
    """
    __slots__ = []
    def __init__(self):
        raise ValueError("This class (%s) is not supposed to be instantiated" % repr(self.__class__))


class HdlTypeAuto(object):
    """
    Type which means that the type is automatically resolved
    from the type of the value
    """
    __slots__ = []
    def __init__(self):
        raise ValueError("This class (%s) is not supposed to be instantiated" % repr(self.__class__))


class HdlBuildinFn(Enum):
    """
    The build in functions and operators in HDL languages
    """
    (
    RANGE,  # range used in VHDL type specifications
    REVERSE_RANGE,
    ACROSS,
    THROUGH,
    REFERENCE,
    TOLERANCE,
    INDEX,  # array index
    DOWNTO,  # downto for the slice specification
    TO,  # to for the slice specification
    SUB,  # can also be unary minus
    ADD,  # can also be unary plus
    DIV,
    MUL,
    MOD,
    REM,
    CONCAT,  # concatenation of signals
    REPL_CONCAT,  # replicative concatenation {<N>, <item>} duplicates and concatenates the item N times
    POW,  # bin operator power of
    ABS,  # absolute value
    NOT,
    NEG,  # negation
    LOG_AND,
    LOG_OR,
    AND,
    OR,
    NAND,
    NOR,
    XOR,
    XNOR,
    EQ,  # ==
    NEQ,  # ~
    LT,  # <
    LE,  # <=
    GT,  # >
    GE,  # >=
    SLL,  # shift left logical
    SRL,  # shift right logical
    SLA,  # shift left arithmetical
    SRA,  # shift right arithmetical
    ROL,  # rotate left
    ROR,  # rotate right
    TERNARY,
    DOT,
    APOSTROPHE,  # vhdl attribute access, SystemVerilog static cast
    CALL,
    ARROW,  # arrow operator used in vhdl type descriptions
    RISING,  # rising edge/posedge event operator
    FALLING,  # falling edge/negedge event operator
    MAP_ASSOCIATION,
    MATCH_EQ,  # VHDL-2008 matching ops (the X values are ignored while match)
    MATCH_NEQ,
    MATCH_LT,
    MATCH_LE,
    MATCH_GT,
    MATCH_GE,
    ) = range(55)
    # note that in verilog bitewise operators can have only one argument


class HdlCall(object):
    """
    Container for call of the HDL function in HDL code
    """
    __slots__ = ["fn", "ops"]

    def __init__(self):
        self.fn = None  # type: Union[HdlBuildinFn, iHdlExpr]
        self.ops = []  # type: List[iHdlExpr]


class HdlIntValue(object):
    """
    Object for representation of int value in in HDL (= also for the bitstrings)

    :ivar val: int value or bitstring string
    :ivar bits: number of bits if specified
    :ivar base: base for bitstring
    """
    __slots__ = ["val", "bits", "base"]

    def __init__(self, val, bits, base):
        self.val = val  # type: Union[int, str]
        self.bits = bits  # type: Optional[int]
        self.base = base  # type: Optional[Union[2, 8, 10, 16, 256]]

    def __int__(self):
        return int(self.val)

    def __bool__(self):
        return bool(self.val)

    def __nonzero__(self):
        return self.__bool__()


# None is equivalent of HDL null
iHdlExpr = Union[HdlName, HdlIntValue, float, str,
                 None, List["iHdlExpr"], HdlAll, HdlCall]