#ifndef MYCLASS_H // Include guard to prevent multiple inclusions
#define MYCLASS_H

class Array
{
    private:
    int *data;
    int size_;
    int length;


    public:

    Array(int size = 10);
    int getSize();
    int getLength();
    void display();
    void insert(int ele);
    void append(int ele);
    void DeleteAt(int idx);
    int getAt(int idx);
    int setAt(int idx, int ele);
    int Maximum();
    int Minimum();
    void reverse();
    void leftShift(int times);
    void leftRotate(int times);
    bool LinearSearch(int key);
    bool BinarySearch(int key);
    bool IsSorted();
    void resizeArray(int size);



    ~Array();

};











#endif // MYCLASS_H