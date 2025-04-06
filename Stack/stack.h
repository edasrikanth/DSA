#ifndef Stack_H // Include guard to prevent multiple inclusions
#define Stack_H

class Stack
{
    private:
        int size;
        int top = -1;
        int *data;

    public:
        Stack();
        Stack(int A[], int si);
        void push(int ele);
        int pop();
        int peek();
        bool IsEmpty();
        bool IsFull();
        void display();
        ~Stack();
};


#endif