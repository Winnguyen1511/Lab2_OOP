#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <stdlib.h>
class stack
{
private:
    struct StackNode
    {
        int value;
        StackNode *next;
    };
    StackNode *top;
    int stackSize;
public:
    stack()
    {
        this->top = NULL;
        this->stackSize = 0;
    }
    ~stack();
    void push(int);
    int pop();
    bool isEmpty();
    int size();
};

#endif // STACK_H_INCLUDED
