#ifndef EVALUATE_H
#define EVALUATE_H
#include <iostream>

#include <string>
#include <cctype>
#include <stdexcept>
#include <cmath>

#include"stack.h"
#include <string>
#endif // EVALUATE_H
// 计算两个操作数的运算结果
double applyOp(double a, double b, wchar_t op);
// 获取操作符优先级
int getPriority(wchar_t op);
// 计算中缀表达式
double evaluate(const std::wstring& expression);
