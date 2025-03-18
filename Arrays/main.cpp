#include "ADT_Array.h"
#include <iostream>


int main()
{
    Array arr(5);

    arr.insert(1);
    arr.insert(2);
    arr.insert(3);
    arr.insert(4);
    arr.insert(5);
    arr.insert(6);

    arr.display();
    std::cout <<"\n";
    arr.DeleteAt(3);
    arr.display();

    std::cout<<"\nvalue at idx 2 is :"<<arr.getAt(2) << std::endl;

    arr.setAt(2, 10);
    arr.display();
    
    std::cout<<"\nMaximum element in array is : "<< arr.Maximum()<<std::endl;

    std::cout<<"\nMinimum element in array is : "<< arr.Minimum()<<std::endl;

    arr.reverse();
    arr.display();

    std::cout <<"\n";
    arr.leftShift(2);
    arr.display();

    std::cout <<"\n";
    arr.append(5);
    arr.append(6);
    arr.append(7);
    arr.display();

    std::cout <<"\n";
    arr.leftRotate(2);
    arr.display();
    arr.DeleteAt(arr.getLength() - 1);
    std::cout <<"\n";
    arr.display();

    std::cout<<"\nLinear Search of element in array result is :"<<std::boolalpha <<arr.LinearSearch(10)<<std::endl;

    // note:: for binary search. make sure array is sorted
    std::cout<<"\nBinary Search of element in array result is :"<<std::boolalpha <<arr.BinarySearch(10)<<std::endl;


    std::cout << "Is Array Sorted ?"<<std::boolalpha <<arr.IsSorted()<<std::endl;


    std::cout <<"\n"<<arr.getLength() << " "<< arr.getSize();



    return 0;
}