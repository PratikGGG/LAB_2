#include <iostream>
#include "../include/Queue.h"
using namespace std;

int main()
{
    Queue *queue = new ArrayQueue(5);
    int data;
    if(queue->isEmpty())
    {
        cout<<"The queue is empty "<<endl;

    }
    queue->enQueue(2);
    queue->enQueue(4);
    queue->enQueue(8);
    queue->enQueue(9);
    queue->deQueue(data);
    cout<<"The dequeued element is :"<<data<<endl;
    queue->front(data);
    cout<<"The front element is :"<<data<<endl;
    queue->rear(data);
    cout<<"The rear element is :"<<data<<endl;
    queue->traverse();


    Queue *queue2 = new LinkedListQueue();
    int data;
    if(queue2->isEmpty())
    {
        cout<<"The queue is empty "<<endl;

    }
    queue2->enQueue(2);
    queue2->enQueue(4);
    queue2->enQueue(8);
    queue2->enQueue(9);
    queue2->deQueue(data);
    cout<<"The dequeued element is :"<<data<<endl;
    queue2->front(data);
    cout<<"The front element is :"<<data<<endl;
    queue2->rear(data);
    cout<<"The rear element is :"<<data<<endl;
    queue2->traverse();

}