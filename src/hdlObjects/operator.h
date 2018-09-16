#pragma once
#include <vector>
#include "jsonable.h"
#include "operatorType.h"
#include "expr.h"
#include "exprItem.h"

class Operator: public ExprItem {
private:
	Operator();
public:
	Expr* op0;
	OperatorType op;
	Expr* op1;
	std::vector<Expr*> * operands;
	Operator(const Operator & o);
	Operator(Expr* op0, OperatorType operatorType, Expr* op1);

	static Operator * call(Expr* fn, std::vector<Expr*> * operands);
	static Operator * slice(Expr* fn, std::vector<Expr*> * operands);
	static Operator * ternary(Expr* cond, Expr* ifTrue, Expr* ifFalse);
#ifdef USE_PYTHON
	PyObject * toJson() const;
#endif
	ExprItem * clone() const;
	void dump(int indent) const;
	~Operator();
};
