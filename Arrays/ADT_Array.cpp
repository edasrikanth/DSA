#include <iostream>


class Array
{
private:
    int *data;
    int size_;
    int length;

public:
    Array(int size = 10)
    {
        size_ = size;
        data = new int[size];
        length = 0;
    }

    int getSize()
    {
        return size_;
    }

    int getLength()
    {
        return length;
    }

    void display()
    {
        for(int i = 0; i < length; i++)
        {
            std::cout << data[i]<< " ";
        }
    }

    void insert(int ele)
    {
        if(length == size_)
        {
            resizeArray(2*size_);
        }
        data[length++] = ele;
    }

    void append(int ele)
    {
        if(length == size_)
        {
            resizeArray(2*size_);
        }
        data[length++] = ele;
    }

    void DeleteAt(int idx)
    {
        for(int i = idx; i < length; i++)
        {
            data[i] = data[i+1];
        }
        length--;
    }

    int getAt(int idx)
    {
        for(int i = 0; i < length; i++)
        {
            if(i == idx)
            {
                return data[i];
            }
        }
    }

    int setAt(int idx, int ele)
    {
        for(int i = 0; i < length; i++)
        {
            if(i == idx)
            {
                data[i] = ele;
            }
        }
    }

    int Maximum()
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

    int Minimum()
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

    void reverse()
    {
        for(int i = 0, j = length -1; i < j; i++, j--)
        {
            // swaping elements;
            data[i] = data[i]^data[j];
            data[j] = data[i]^data[j];
            data[i] = data[i]^data[j];
        }
    }

    void leftShift(int times)
    {
        for(int i = 0; i < length; i++)
        {
            data[i] = data[i + times];
        }
        length = length - times;
    }

    void leftRotate(int times)
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

    bool LinearSearch(int key)
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
    bool BinarySearch(int key)
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

    void resizeArray(int size)
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

    ~Array()
    {
        delete[] data;
    }
};




int main()
{

    std::cout << "Hello all..."<<std::endl;

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


    std::cout <<"\n"<<arr.getLength() << " "<< arr.getSize();

    return 0;
}