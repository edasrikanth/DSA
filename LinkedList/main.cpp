#include "LinkedList.h"
#include <iostream>

int main()
{
    int A[] = {1,2,3,4,5};
    LinkedList ll(A, sizeof(A)/sizeof(A[0]));
    ll.Display();
    std::cout<<"\nno .of nodes in linked list are: "<<ll.countNodes()<<std::endl;
    std::cout<<"sum of elements in linked list are: "<<ll.sumOfLinkedList()<<std::endl;
    std::cout<<"Maximum element in linked list is: "<<ll.MaximumLinkedList()<<std::endl;
    std::cout<<"Minimum element in linked list is: "<<ll.MinimumLikedList()<<std::endl;
    std::cout<<"Searching for 3 present in linked list : "<<ll.searching(3)<<std::endl;
    // std::cout<<"Searching for 4 present in linked list using improveSearching : "<<ll.Improvesearching(4)<<std::endl;
    // std::cout<<"Inserting 15 before the head of linked list : "<<std::endl;
    // ll.InsertAtBeforeHead(15);
    // ll.Display();
    // std::cout<<"\nInserting 25 after 3rd Node in linked list"<<std::endl;
    // ll.InsertAtAfterGivenPos(25, 3);
    ll.Display();
    ll.InsertInSortedOrder(4);
    std::cout<<std::endl;
    ll.Display();
    // std::cout<<"\nDeleting a node at 4th position and the value at 4th position is :"<<ll.DeletingNode(4)<< std::endl;
    // ll.Display();
    std::cout<<"\nChecking linked list is sorted or not :"<<ll.IsSorted()<<std::endl;
    ll.RemoveDuplicates();
    ll.Display();
    std::cout<<std::endl;
    ll.Reverse();
    ll.Display();

    return 0;
}