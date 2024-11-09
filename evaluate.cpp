#include"evaluate.h"
#include"mainwindow.h"
#include <cmath>
#include <string>
#include<QDebug>
bool isInteger(double value) {
    // 判断是否为整数
    return value == static_cast<int>(value);
}

double applyOp(double a, double b, wchar_t op) {
    switch(op) {
    case L'+': return a + b;
    case L'-': return a - b;
    case L'*': return a * b;
    case L'%':
        if(b==0){
            throw std::runtime_error("Error: Division by zero"); // 非零检测
            qDebug()<<"/0 1";
        }
        else if(isInteger(a)&&isInteger(b)){
            int i=static_cast<int>(a);
            int j=static_cast<int>(b);
            qDebug()<<i;
            qDebug()<<j;
            qDebug()<<i<<"%"<<j<<"="<<i%j;
            return i%j;
        }
        else{
            throw std::runtime_error("Error: Division by zero");
        }
    case L'/':
        if(b==0){
            throw std::runtime_error("Error: Division by zero"); // 非零检测
            qDebug()<<"/0 1";
        }
        else return a / b;
    }


}

double factorial(double n ){
    if(n==0){
        return 1;
    }else if(n<0){
        throw std::runtime_error("Error:negative factorial "); // 整数检测
    }else{
        double i;
        i=n*factorial(n-1);
        return i;
    }
}

// 获取操作符优先级
int getPriority(wchar_t op) {
    switch(op) {
    case '+':
    case '-': return 1;
    case '*':
    case '%':
    case '/': return 2;
    }
    return 0;
}


// 计算中缀表达式
double evaluate(const std::wstring& expression) {
    SqStack<double> values; // 存储操作数
    SqStack<wchar_t> ops;   // 存储操作符

    InitStack(&values);
    InitStack(&ops);



    for(size_t i = 0; i < expression.length(); i++) {
        if (isspace(expression[i])) {
            continue; // 跳过空白字符
        }

        if(expression[i]=='!'){
            double val;
            if (Pop(&values, &val) != OK) {
                throw std::runtime_error("Failed to pop from values stack");
            }
            try {
                double result=factorial(val);
                Push(&values,result);
            } catch (...) {
                throw std::runtime_error("Error:negative factorial");//输入负数
                qDebug()<<"negative";
            }


        }


        if (isdigit(expression[i]) || expression[i]==L'√'||expression[i] == '.'||(expression[i] == '-' && (i == 0 || expression[i - 1] == '('||expression[i-1]=='+'))||(expression[i] == '+' && (i == 0 || expression[i - 1] == '+'))) {
            double val = 0;
            double decimalFactor = 1.0;
            bool isDecimal = false;
            bool isNegative=false;
            bool isRoot=false;

            if (expression[i] == '-') {
                isNegative = true; // 识别负数
                i++; // 继续读取下一个字符
            }
            if(expression[i]=='+'){
                isNegative==false;
                i++;
            }
            if (expression[i] == L'√') {
                isRoot = true; // 检测到根号，标记为开方

                if (i < expression.length() && expression[i+1] == L'(') {
                    // 检测到 √ 后面的括号，处理括号内的表达式

                    int j = i; // j 用于找到与 '(' 匹配的 ')'
                    j++;
                    int brackets = 1; // 括号计数



                    while (brackets > 0 && j < expression.length()) {


                        j++;
                        if (expression[j] == L'(') brackets++;
                        if (expression[j] == L')') brackets--;
                        qDebug()<<"brackets"<<brackets;


                    }
                    if (brackets != 0) {

                        throw std::runtime_error("mismatched after √");
                    }
                    else{

                         std::wstring subExpression = expression.substr(i+1 , j );
                        qDebug()<<subExpression;
                        double subResult = evaluate(subExpression); // 递归求括号内的值


                        qDebug()<<"subresult"<<subResult;

                        val = sqrt(subResult); // 对括号内的结果开方
                        isRoot=false;
                    }


                    // 括号内的表达式



                    i = j+1; // 将索引移到括号后的字符
                }else if(expression[i+1] != L'('){
                    isRoot=true;
                    i++;

                }
            }


            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                if (expression[i] == '.') {
                    isDecimal = true;
                } else {
                    if (isDecimal) {
                        decimalFactor *= 0.1;
                        val += (expression[i] - '0') * decimalFactor;
                    } else {
                        val = val * 10 + (expression[i] - '0');
                    }
                }
                i++;
            }

            if(isNegative){
                val=-val;
            }
            if (isRoot && !expression.empty()) {
                val = sqrt(val);
                qDebug()<<"the sqrt is"<<val;
            }



            Push(&values, val);
            qDebug()<<"value:"<<val;

            i--; // 调整i以便循环处理后续字符
        }else if (expression[i] == '(') {
            if(expression[i-1]==')'){
                throw std::invalid_argument("invalid input");
            }
            Push(&ops, expression[i]);
            qDebug()<<"exp:"<<expression[i];
        }else if (expression[i] == ')') {
            while (!IsEmpty(&ops) && GetTop(&ops) != '(') {
                double val2;
                if (Pop(&values, &val2) != OK) {
                    throw std::runtime_error("Failed to pop from values stack");
                }

                double val1;
                if (Pop(&values, &val1) != OK) {
                    throw std::runtime_error("Failed to pop from values stack");
                }

               wchar_t op;
                if (Pop(&ops, &op) != OK) {
                    throw std::runtime_error("Failed to pop from ops stack");
                }

                try{
                    double result= applyOp(static_cast<double>(val1), static_cast<double>(val2), op);
                    Push(&values,result);

                    //qDebug()<<"result:the result of"<< val1<<op << val2 <<"is"<<result;


                }catch(std::runtime_error e){
                    throw std::runtime_error("Error: Division by zero");
                     qDebug()<<"/0 2";
                }





            }
            if (IsEmpty(&ops)) {
                qDebug()<<expression[i];
                throw std::invalid_argument("Mismatched parentheses");//缺左括号
            }
            wchar_t left;
            if (Pop(&ops, &left) != OK || left != '(') {
                throw std::runtime_error("Failed to pop '(' from ops stack");
            }

        }else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/'|| expression[i] == '%') {
            qDebug()<<"priority of "<<GetTop(&ops)<<getPriority(GetTop(&ops));
            while (!IsEmpty(&ops) && getPriority(GetTop(&ops)) >= getPriority(expression[i])) {



                double val2;
                if (Pop(&values, &val2) != OK) {
                    throw std::runtime_error("Failed to pop from values stack");
                }

                double val1;
                if (Pop(&values, &val1) != OK) {
                    throw std::runtime_error("Failed to pop from values stack");
                }

                wchar_t op;
                if (Pop(&ops, &op) != OK) {
                    throw std::runtime_error("Failed to pop from ops stack");
                }

                try{
                double result= applyOp(static_cast<double>(val1), static_cast<double>(val2), op);
                Push(&values,result);

                qDebug()<<"result:the result of"<< val1<<op << val2 <<"is"<<result;


                }catch(std::runtime_error e){
                    throw std::runtime_error("Error: Division by zero");//零为除数
                     qDebug()<<"/0 2";
                }
            }

            Push(&ops, expression[i]);
           // qDebug()<<"exp:"<<expression[i];
        }
        else if(expression[i]==L'²'){

            double val;
            if (Pop(&values, &val) != OK) {
                throw std::runtime_error("Failed to pop from values stack");
            }
            val=val*val;
            Push(&values,val);


        }
    }

    while (!IsEmpty(&ops)) {
        double val2;
        if (Pop(&values, &val2) != OK) {
            throw std::runtime_error("Failed to pop from values stack");
        }

        double val1;
        if (Pop(&values, &val1) != OK) {
            throw std::runtime_error("Failed to pop from values stack");
        }

       wchar_t op;
        if (Pop(&ops, &op) != OK) {
            throw std::runtime_error("Failed to pop from ops stack");
        }

        try{
            double result= applyOp(static_cast<double>(val1), static_cast<double>(val2), op);
            Push(&values,result);

            //qDebug()<<"result:the result of"<< val1<<op << val2 <<"is"<<result;


        }catch(std::runtime_error e){
            throw std::runtime_error("Error: Division by zero");
             qDebug()<<"/0 2";
        }

    }

    //qDebug()<<"final result:"<<GetTop(&values);
    return GetTop(&values);

}
