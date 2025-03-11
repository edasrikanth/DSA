#include <iostream>
using namespace std;


int main()
{
    std::cout <<"Hello"<<std::endl;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; i++)
    std::cout <<arr[i] << " ";

    std::cout <<"\ndynamic array creation "<< std::endl;

    int *A;

    A = new int[10];
    A[0] = 11;
    A[1] = 12;
    A[2] = 13;
    A[3] = 14;
    A[4] = 15;

    for(int i = 0; i < 10; i++)
    std::cout << A[i]<< " ";

    std::cout << "\nAccessing array elements in different manner : "<< 2[A]<< std::endl;

    delete A;
    std::cout<<"two dimensional arrays"<<std::endl;

    int Ar[3][2] = {{1, 2},{3, 4},{5, 6}};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            std::cout << Ar[i][j] << " ";
        }
        std::cout<<std::endl;
    }

    std::cout<<"dynamic allocation of 2-d array"<<std::endl;

    int *APtr[3];
    
    for(int i = 0; i < 3; i++)
    {
        APtr[i] = new int[2];
    }

    std::cout << "inserting elements in dynamically created array :"<< std::endl;

    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 2; j++)
    APtr[i][j] = i + j + 1;


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
        std::cout <<  APtr[i][j] << " ";
        }
        std::cout <<std::endl;
    }

    std::cout<<"Acessing one row in dynamically created array"<<std::endl;

    for(int i = 0; i < 3; i++)
    {
        std::cout<< *APtr[i]<< " ";
    }

    // deleting dynamically created array
    for (int i = 0; i < 3; i++) {
        delete[] APtr[i];
    }

    std::cout<<"\ncreating array using double pointer "<<std::endl;

    int **DpArray;

    int row = 3;
    int col = 2;

    DpArray = new int*[row];

    for(int i = 0; i < row; i++)
    {
        DpArray[i] = new int[col];
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            DpArray[i][j] = i + 1;
        }
    }


    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            std::cout << DpArray[i][j] << " ";
        }

        std::cout << "\n";

    }


    return 0;
}