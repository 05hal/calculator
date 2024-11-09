#ifndef STACK_H
#define STACK_H

#endif // STACK_H
#include <iostream>
#include <stdexcept>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;

#define MAXSTACK 100
template <typename T>// Define the type for stack elements

struct SqStack {
    T *base;
    T *top;
    int stacksize;
};

template <typename T>
Status InitStack(SqStack<T> *S) {
    S->base = (T *)malloc(sizeof(T) * MAXSTACK);
    if (!S->base)
        exit(OVERFLOW);
    S->top = S->base;        //栈顶和指向栈底
    S->stacksize = MAXSTACK; //栈的容量
    return OK;
}
template <typename T>
Status Push(SqStack<T> *S, T e) {
    if (S->top - S->base == S->stacksize)
        return ERROR; //表示此时栈满
    *(S->top++) = e; // top指向内存单元存放e，且top指向下一个内存单元
    return OK;
}
template <typename T>
Status Pop(SqStack<T> *S,T *e) {
    if (S->base == S->top)
        return ERROR; //栈空
    *e = *(--(S->top));
    return OK;
}
template <typename T>
Status IsEmpty(SqStack<T> *S) {
    if (S->base == S->top)
        return TRUE;
    else
        return FALSE;
}
template <typename T>
T GetTop(SqStack<T> *S) {
    if (!IsEmpty(S))
        return *(S->top - 1);
}

