#ifndef LinkedList_H // Include guard to prevent multiple inclusions
#define LinkedList_H

struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
private:
    Node* head = nullptr;

public:
    LinkedList(int A[], int size);
    void Display();
    int countNodes();
    int sumOfLinkedList();
    int MaximumLinkedList();
    int MinimumLikedList();
    bool searching(int key);
    bool Improvesearching(int key);
    void InsertAtBeforeHead(int x);
    void InsertAtAfterGivenPos(int ele, int pos);
    void InsertInSortedOrder(int x);
    int DeletingNode(int pos);
    bool IsSorted();
    void RemoveDuplicates();
    void Reverse();

    ~LinkedList();
};







#endif