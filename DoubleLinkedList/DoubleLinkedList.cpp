#include "DoubleLinkedList.h"
#include <iostream> 

DoubleLinkedList::DoubleLinkedList(int A[], int size)
{
    node* p = new node();
    p->data = A[0];
    p->prev = nullptr;
    p->next = nullptr;
    head = p;


    for(int i = 1; i < size; i++)
    {
        node* t = new node();
        t->data = A[i];
        t->prev = nullptr;
        t->next = nullptr;


        p->next = t;
        t->prev = p;
        p = t;
    }
}


void DoubleLinkedList::Display()
{
    node* p = head;
    while(p != nullptr)
    {
        std::cout << p->data <<" ";

        p =  p->next;
    }
}

void DoubleLinkedList::Insert(int idx, int ele)
{
    node* p = head;

    if(idx == 0)
    {
        node* t = new node();
        t->data = ele;
        t->prev = nullptr;
        t->next = p;
        p->prev = t;
        head = t;
    }
    else
    {
        for(int i = 0; i < idx - 1; i++)
        {
            p = p->next;
        }
        node* t = new node();
        t->data = ele;
        t->prev = p;
        t->next = p->next;
        if(p->next)
        {
            p->next->prev = t;
            p->next = t;
        }
        
    }
}

DoubleLinkedList::~DoubleLinkedList()
{
    node* p = head;
    while(p != nullptr)
    {
        node* t = p->next;
        delete p;
        p = t;
    }
    head = nullptr;
}

int DoubleLinkedList::Delete(int idx)
{
    node* p = head;
    int x = -1;
    if(idx == 1)
    {
        head = head->next;
        if(head)
        head->prev = nullptr;
        x = p->data;
        delete p;
    }
    else
    {
        for(int i = 0; i < idx - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if(p->next)
        {
            p->next->prev = p->prev;
        }
        x = p->data;
        delete p;
    }
    return x;  
}

void DoubleLinkedList::Reverse()
{
    node* tmp;
    node* p = head;

    while(p != nullptr)
    {
        tmp = p->next;
        p->next = p->prev;
        p->prev = tmp;

        if(p->prev == nullptr)
        {
            head = p;
        }
        p = p->prev;
    }
    
}