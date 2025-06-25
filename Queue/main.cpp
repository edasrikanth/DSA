#include "Queue.h"
#include<iostream>


int main()
{
    Queue queue;
    queue.enqueue(32);
    queue.enqueue(34);
    queue.enqueue(35);
    queue.enqueue(36);
    queue.enqueue(37);
    queue.enqueue(38);
    std::cout<<queue.getQueueSize()<<std::endl;
    queue.displayQueue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    std::cout<<"................"<<std::endl;
    std::cout<<queue.getQueueSize()<<std::endl;
    queue.displayQueue();

    return 0;
}