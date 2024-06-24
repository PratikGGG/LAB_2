#pragma once
#include "linkedlist.h"
class Stack
{
public:
  
    virtual bool isEmpty() = 0;
    virtual bool push(int data) = 0;
    virtual void pop(int &data) = 0;
    virtual void top(int &data) = 0;
    virtual void traverse() = 0;
    
};

class LinkedListStack : public Stack
{
private:
    LinkedList list;

public:
    LinkedListStack();

    virtual ~LinkedListStack();
    bool isEmpty();
    bool push(int data);
    void pop(int &data);
    void top(int &data);
    void traverse();
    
};


class ArrayStack : public Stack 
    {
        private :
            int *data;
            int topindex;
            int size;
        
        public:
            ArrayStack(int size);
            bool isFull();
            virtual bool isEmpty() ;
            virtual bool push (const int element );
            virtual void pop (int &element);
            virtual void top(int &element) ;
            void traverse();
    };