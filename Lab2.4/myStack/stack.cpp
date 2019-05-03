#include "stack.h"

stack::~stack()
{
    StackNode *nodePtr =NULL, *nextNode = NULL;
    nodePtr = this->top;
    while(nodePtr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}
void stack::push(int num)
{
    StackNode *newNode = NULL;
    newNode = new StackNode;
    newNode->value = num;
    if(this->isEmpty())
    {
        top = newNode;
        newNode->next = NULL;
    }
    else
    {
        newNode->next = this->top;
        this->top = newNode;
    }
    this->stackSize++;
}
int stack::pop()
{
    if(isEmpty()) return 0;
    int tmp = this->top->value;
    StackNode *nodePtr = this->top->next;
    delete this->top;
    this->top = nodePtr;
    this->stackSize--;
}
bool stack::isEmpty()
{
    if(!this->top)
        return false;
    return true;
}
int stack::size()
{
    return this->stackSize;
}
