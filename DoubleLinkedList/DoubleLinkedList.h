#ifndef LinkedList_H // Include guard to prevent multiple inclusions
#define LinkedList_H

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

class DoubleLinkedList
{
private:
    /* data */
    node* head = nullptr;

public:
    DoubleLinkedList(int A[], int size);
    void Display();
    void Insert(int idx, int ele);
    int Delete(int idx);
    void Reverse();

    ~DoubleLinkedList();
};


#endif