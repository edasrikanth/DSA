#include "ADT_Array.h" // Include the corresponding header file
#include <iostream>   // For input/output operations


Array::Array(int size)
{
    size_ = size;
    data = new int[size];
    length = 0;
}

int Array::getSize()
{
    return size_;
}

int Array::getLength()
{
    return length;
}

void Array::display()
{
    for(int i = 0; i < length; i++)
    {    
        std::cout << data[i]<< " ";
    }        
}

void Array::insert(int ele)
{
    if(length == size_)
        {
            resizeArray(2*size_);
        }
        data[length++] = ele;
}

void Array::append(int ele)
{
    if(length == size_)
        {
            resizeArray(2*size_);
        }
        data[length++] = ele;
}

void Array::DeleteAt(int idx)
{
    for(int i = idx; i < length; i++)
    {
        data[i] = data[i+1];
    }
    length--;
}

int Array::getAt(int idx)
{
    for(int i = 0; i < length; i++)
    {
        if(i == idx)
        {
            return data[i];
        }
    }
}


int Array::setAt(int idx, int ele)
{
    for(int i = 0; i < length; i++)
    {
        if(i == idx)
        {
            data[i] = ele;
        }
    }
}


int Array::Maximum()
{
    int maxi = data[0];
    for(int i = 1; i < length; i++)
    {
        if(data[i] > maxi)
        {
            maxi = data[i];
        }
    }
    return maxi;
}

int Array::Minimum()
{
    int mini = data[0];
    for(int i = 1; i < length; i++)
    {
        if(data[i] < mini)
        {
            mini = data[i];
        }
    }

    return mini;
}

void Array::reverse()
{
    for(int i = 0, j = length -1; i < j; i++, j--)
    {
        // swaping elements;
        data[i] = data[i]^data[j];
        data[j] = data[i]^data[j];
        data[i] = data[i]^data[j];
    }
}

void Array::leftShift(int times)
{
    for(int i = 0; i < length; i++)
    {
        data[i] = data[i + times];
    }
    length = length - times;
}

void Array::leftRotate(int times)
{
    int *temp = new int[times];

    for(int i = 0; i < times; i++)
    {
        temp[i] = data[i];
    }

    for(int i = 0; i < length - times; i++)
    {
        data[i] = data[i + times];
    }

    for(int i = 0; i < times; i++)
    {
        data[length - times + i] = temp[i];
    }

    delete[] temp;
}


bool Array::LinearSearch(int key)
{
    for(int i = 0; i < length; i++)
    {
        if(data[i] == key)
        {
            return true;
        }
    }

    return false;
}

bool Array::BinarySearch(int key)
{
    int l = 0, h = length - 1;

    while(l <= h)
    {
        int mid = (l + h)/2;

        if(data[mid] == key)
        {
            return true;
        }
        else if(key > data[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return false;
}

bool Array::IsSorted()
{
    for(int i = 0; i < length; i++)
    {
        if(data[i] > data[i+1])
        return false;
    }
    return true;
}


void Array::resizeArray(int size)
{
    int *newSizePtr = new int[size];

    for(int i = 0; i < length; i++)
    {
        newSizePtr[i] = data[i];
    }
    delete[] data;
    size_ = size;
    data = newSizePtr;
}


Array::~Array()
{
    delete[] data;
}