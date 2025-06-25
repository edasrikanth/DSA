#ifndef Queue_H // Include guard to prevent multiple inclusions
#define Queue_H

class Queue
{
    private:
        int length;
        int front = -1;
        int rear = -1;
        int *data;

    public:
    Queue();
    void enqueue(int x);
    int dequeue();
    int getQueueSize();
    void displayQueue();

    ~Queue();
        
};


#endif