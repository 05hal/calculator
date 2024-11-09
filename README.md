# calculator

《专业课程综合实训》
实验报告

项目名称：计算器

一．问题描述
1、实现一个图形界面的计算器
2、利用双栈实现中缀表达式求值，实现 + - * / 运算和（）、 回退、清除、基本的容错
3、扩展功能：一元运算符 历史记录

二．设计思路及数据结构描述
1、	数据结构：数据结构采用泛型类型的顺序栈（template <typename T>），初始化时构造两个类型分别为double（ SqStack<double>）、宽字符串（SqStack<wchar_t>）的栈。在封装结构内实现栈的初始化，出栈、入栈、获取顶部元素以及栈空判断。

2、	图形界面：
用lineEdit显示计算结果 textBrowser显示历史记录
采用GridLayOut将按钮排成（6*4）的方阵
槽函数中实现计算表达式的更新，结果的显示
 
3、	利用中缀表达式进行四则计算
基本算法（double evaluate(const std::wstring& expression)）：从左往右扫描，遇到操作数入栈values。遇到操作符时，如果优先级低于或等于栈顶操作符优先级，则从values中弹出两个元素进行计算，并压入values，继续与栈顶操作符的比较优先级。如果遇到操作符高于栈顶操作符优先级，则直接入栈ops。遇到左括号，直接入栈ops，遇到右括号，则直接出栈并计算（applyOp（）实现二元运算），直到遇到左括号。
细节：1）数字处理
数字处理中通过开关（isDecimal、isNegative、isRoot）实现小数、负数、根号（前置一元运算）的判断。
识别整数：设置一个val值，用while循环，每次遇到下一位数字，val*10+下一位
识别小数：设置一个decimalFactor值，遇到小数点，isDecimal设为真，每次遇到下一位数字decimalFactor*0.1*下一位，加到val中
识别根号：检测到根号，isRoot设为真，检测到括号，通过计数器进行括号匹配并截取括号内表达式，递归调用evaluate计算括号内值，计算完毕后开方入栈
识别负数：判断如果符号前面有运算符或左括号，将isNegative设为真，取相反数入栈

      2）一元运算符
4、	容错
/：除数不为零，否则抛出异常"Error: Division by zero"
！：阶乘运算需正数，否则抛出异常"Error:negative factorial "
（：右括号计算时如果没有遇到左括号，抛出异常"Mismatched parentheses"
   若右括号左括号之间没有运算符，抛出异常"invalid input"
根号：若根号下括号不匹配，抛出异常"mismatched after √"

