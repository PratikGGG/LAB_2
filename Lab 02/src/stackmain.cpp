#include <iostream>
#include "../include/stack.h"

int main()
{
    int data;
    Stack *s1 = new ArrayStack(10);
    {
    if (s1->isEmpty())
        std::cout<<"The stack is empty"<<std::endl;

    }
    s1->push(4);
    s1->push(2);
    s1->push(9);
    s1->push(5);
    s1->pop(data);
    std::cout<<"The removed data is "<<data<<std::endl;
    s1->top(data);
    std::cout<<"The top element is"<<data<<std::endl;
    s1->traverse();


  Stack *s2 = new LinkedListStack();
    {
    if (s2->isEmpty())
        std::cout<<"The stack is empty"<<std::endl;

    }
    s2->push(4);
    s2->push(2);
    s2->push(9);
    s2->push(5);
    s2->pop(data);
    std::cout<<"The removed data is "<<data<<std::endl;
    s2->top(data);
    std::cout<<"The top element is"<<data<<std::endl;
    s2->traverse();
}