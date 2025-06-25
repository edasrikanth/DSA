#include "Queue.h"
#include <iostream>


#define SIZE  100

Queue::Queue()
{
    data = new int[SIZE];
    length = 0;
}


void Queue::enqueue(int x)
{
    if(rear == SIZE - 1)
    {
        std::cout <<"Queue is full"<<std::endl;
    }
    else
    {
        rear++;
        data[rear] = x;
        length++;
        if(front == -1) front = 0;
    }
}


int Queue::dequeue()
{
    if(front == -1 || front > rear)
    {
        std::cout<<"Queue is Empty"<<std::endl;
        return -1;
    }

    int val = data[front];
    front++;
    length--;

    if(front > rear)
    {
        front = rear = -1;
    }
    return val;
}

void Queue::displayQueue()
{
    if(front == -1 || front > rear)
    {
        std::cout<<"Queue is empty"<<std::endl;
        return;
    }

    for(int i = front; i <= rear; i++)
    {
        std::cout<< data[i]<<" ";
    }

}

int Queue::getQueueSize()
{
    return length;
}

Queue::~Queue()
{
    if(data != nullptr)
    {
    delete [] data;
    data = nullptr;
    }
}