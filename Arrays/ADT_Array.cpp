#include <iostream>

struct Array{
    int *data;
    int size;
    int length;
};

void InsertingElements(Array& arr)
{
    for(int i = 0; i < arr.size; i++)
    {
        arr.data[i] = i+1;
    }
    arr.length = arr.size;
}

void Display(Array& arr)
{
    for(int i = 0; i < arr.length; i++)
    {
        std::cout<<arr.data[i] <<" ";
    }
    std::cout <<std::endl;
}
void Append(Array& arr, int ele)
{
    if(arr.size <= arr.length)
    {
        int *newData = new int[arr.size + 1];

        for(int i = 0; i < arr.length; i++)
        {
            newData[i] = arr.data[i];
        }
        delete[] arr.data;
        arr.data = newData;
        arr.size = arr.size + 1;
    }

    arr.data[arr.length++] = ele;

}

int main()
{
    std::cout<<"Hello All..."<< std::endl;

    Array arr;

    arr.size = 10;
    arr.length = 0;
    arr.data = new int[arr.size];

    std::cout<<"Inserting elements in array"<<std::endl;
    InsertingElements(arr);

    std::cout<<"Printing elemnets in array"<<std::endl;
    Display(arr);

    std::cout<<"Appending element in array"<<std::endl;
    Append(arr, 23);
    Display(arr);

    /*std::cout<<"Insert element at given index in array"<<std::endl;
    Insert(arr, 3, 25);

    std::cout<<"Deleting element at given index in array"<<std::endl;
    Delete(arr, 5);

    std::cout<<"getting an elementat given index in array"<<std::endl;
    Get(arr, 7);

    std::cout<<"setting/updating an element at given index in array"<<std::endl;
    Set(arr, 8, 26);

    std::cout<<"Getting Maximum element in array"<<std::endl;
    Maximum(arr);

    std::cout<<"Getting Minimum element in array"<<std::endl;
    Minimum(arr);

    std::cout<<"Reversing an array"<<std::endl;
    Reverse(arr);

    std::cout<<"Left Shifting of array by given times"<<std::endl;
    LeftShif(arr, 1);

    std::cout<<"Left Roatate of array  y given times"<<std::endl;
    LeftRotate(arr, 1);

    std::cout<<"Linear search for given element in array"<<std::endl;
    LinearSearch(arr, 10);

    std::cout<<"Binary search for given element in array"<<std::endl;
    BinarySearch(arr, 8);*/

    return 0;
}