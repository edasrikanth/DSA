#include "LinkedList.h"
#include <iostream> 

LinkedList::LinkedList(int A[], int size)
{
    Node* p = new Node();
    p->data = A[0];
    p->next = nullptr;

    head = p;
    
    for(int i = 1; i < size ; i++)
    {
        Node* t = new Node();
        t->data = A[i];
        t->next = nullptr;
        p->next = t;
        p = t;
    }
}

void LinkedList::Display()
{
    Node* p = head;

    while(p != nullptr)
    {
        std::cout<< p->data << " ";

        p = p->next;
    }
}

int LinkedList::countNodes()
{
    Node* p = head;
    int cnt = 0;
    while(p != nullptr)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}

int LinkedList::sumOfLinkedList()
{
    Node* p = head;
    int sum = 0;
    while(p != nullptr)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int LinkedList::MaximumLinkedList()
{
    Node* p = head;
    int maxi = p->data;
    while(p != nullptr)
    {
        if(p->data > maxi)
        {
            maxi = p->data;
        }
        p = p->next;
    }
    return maxi;
}

int LinkedList::MinimumLikedList()
{
    Node* p = head;
    int mini = p->data;
    while(p != nullptr)
    {
        if(p->data < mini)
        {
            mini = p->data;
        }
        p = p->next;
    }
    return mini;
}

bool LinkedList::searching(int key)
{
    Node* p = head;

    while(p != nullptr)
    {
        if(p->data == key)
        {
            return true;
        }
        p = p->next;
    }
    return false;
}

bool LinkedList::Improvesearching(int key)
{
    Node* p = head;

    while(p != nullptr)
    {
        if(p->data == key)
        {
            p->data = p->data^head->data;
            head->data = p->data^head->data;
            p->data = p->data^head->data;
            return true;
        }
        p = p->next;
    }
    return false;
}

void LinkedList::InsertAtBeforeHead(int x)
{
    Node* t = new Node();
    t->data = x;
    t->next = nullptr;

    Node* p = head;
    t->next = p;
    head = t;
}

void LinkedList::InsertAtAfterGivenPos(int ele, int pos)
{
    Node* t = new Node();
    t->data = ele;
    t->next = nullptr;

    Node* p = head;
    for(int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
}

void LinkedList::InsertInSortedOrder(int x)
{
    Node* t = new Node();
    t->data = x;
    t->next = nullptr;

    Node* p = head;
    Node* q = nullptr;
    while(p && p->data < x)
    {
        q = p;
        p = p->next;
    }
    if(p == head)
    {
        t->next = head;
        head = t;   
    }
    else
    {
        t->next = q->next;
        q->next = t;
    }
}

int LinkedList::DeletingNode(int pos)
{
    if(pos > countNodes() || pos < 1)
    {
        return -1;
    }
    Node* p = head;
    Node* q = nullptr;
    for(int i = 0; i < pos - 1; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    int x = p->data;
    delete p;

    return x;
}

bool LinkedList::IsSorted()
{
    Node* p = head;
    if(p == nullptr || p->next == nullptr)
    {
        return true;
    }

    while(p->next != nullptr)
    {
        if(p->data > p->next->data)
        {
            return false;
        }
        p = p->next;
    }

    return true;
}

void LinkedList::RemoveDuplicates()
{
    Node* p = head;
    Node* q = head->next;
    while(q != nullptr)
    {
        if(p->data != q->data)
        {
        p = q;
        q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void LinkedList::Reverse()
{
    Node* p = head;
    Node* q = nullptr;
    Node* r = nullptr;

    while(p != nullptr)
    {
        r = q;
        q = p;
        p = p->next;

        q->next = r;
    }
    head = q;
}

LinkedList::~LinkedList()
{
    Node* p = head;
    while(p != nullptr)
    {
        Node* t = p->next;
        delete p;
        p = t;
    }
    head = nullptr;
}

