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

int factorial_of_n(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return (n*factorial_of_n(n-1));
    }

}
int main()
{

    std::cout <<"Hello World!!"<<std::endl;

    std::cout <<"The result of first n-natural number for n = 10 is :" << sum_of_n_natural_nums(10)<<std::endl;

    std::cout << "The result of factorial of n = 5 is " << factorial_of_n(5)<<std::endl;

    return 0;
}