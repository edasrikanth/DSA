#include "DoubleLinkedList.h"
#include <iostream> 

int main()
{
    int A[] = {2, 4, 6, 8, 10};

    DoubleLinkedList dll(A, 5);

    dll.Display();
    dll.Insert(3, 20);
    std::cout<<"\n";
    dll.Display();
    std::cout<<"\nDeleting 4th ele : "<<dll.Delete(4)<<std::endl;
    dll.Display();
    std::cout << std::endl;
    dll.Reverse();
    dll.Display();

    return 0;
}