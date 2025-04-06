#include "stack.h"
#include <iostream>

Stack::Stack()
{
    size = 10;
    data = new int[size];
    top = -1;
}

Stack::Stack(int A[], int si)
{
    data = new int[si];
    size = si;
    for(int i = 0; i < si; i++)
    {
        top++;
        data[top] = A[i];
    }
}

bool Stack::IsEmpty()
{
    if(top == -1)
    {
        return true;
    }

    return false;
}

bool Stack::IsFull()
{
    if(top == size - 1)
    {
        return true;
    }
    return false;
}

void Stack::push(int ele)
{
    if(top == size - 1)
    {
        std::cout << "stack overflow"<<std::endl;
    }
    else
    {
        top++;
        data[top] = ele;
    }
}

int Stack::pop()
{
    int x = -1;
    if(top == -1)
    {
        std::cout <<"Stack Underflow"<<std::endl;
    }
    else
    {
        x = data[top];
        top--;
    }
    return x;
}

int Stack::peek()
{
    if(top == -1)
    {
        std::cout <<"stack underflow"<<std::endl;
        return -1;
    }
    else
    {
        return data[top];
    }
}

void Stack::display()
{
    if (top == -1) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }
    std::cout << "Stack elements: ";
    for(int i = 0; i <= top; i++)
    {
        std::cout<<data[i]<<" ";
    }
    std::cout << std::endl;
}

Stack::~Stack()
{
    if (data != nullptr) 
    {
        delete[] data; 
        data = nullptr; 
    }
}
