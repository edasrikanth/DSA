#include <iostream>


int sum_of_n_natural_nums(int n)
{
    if(n == 1){
        return 1;
    }

    else{

        return n + sum_of_n_natural_nums(n-1);
    }

}

int main()
{

    std::cout <<"Hello World!!"<<std::endl;

    std::cout <<"The result of first n-natural number for n = 10 is :" << sum_of_n_natural_nums(10)<<std::endl;

    return 0;
}