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

int power_of_m_n(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
       return (m*power_of_m_n(m, n-1));
    }
}

int power_of_m_n_reducing_multiplications(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        if(n%2 == 0)
        {
        return (power_of_m_n_reducing_multiplications(m*m, n/2));
        }

        else
        {
            return (m*power_of_m_n_reducing_multiplications(m*m, (n-1)/2));
        }
    }
}

double taylor_series_e_pow_x_function(double x, double n)
{
    static double p = 1;
    static double f = 1;
    double r;
    if(n == 0)
    {
        return 1;
    }
    else
    {
       r = taylor_series_e_pow_x_function(x, n-1);
       p = p*x;
       f = f*n;

       return (r + p/f);
    }
}

int fibonacci_series(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci_series(n-2) + fibonacci_series(n-1);
    }
}


int fibonacci_series_red_exce_recurssion(int n)
{
    static int F[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    if(n <= 1)
    {
        F[n] = n;
        return F[n];
    }
    else
    {
        if(F[n-1] == -1)
        {
            F[n-1] = fibonacci_series_red_exce_recurssion(n-1);
        }

        if(F[n-2] == -1)
        {
            F[n-2] = fibonacci_series_red_exce_recurssion(n-2);
        }

        return (F[n-1] + F[n-2]);
    }
}

int main()
{

    std::cout <<"Hello World!!"<<std::endl;

    std::cout <<"The result of first n-natural number for n = 10 is :" << sum_of_n_natural_nums(10)<<std::endl;

    std::cout << "The result of factorial of n = 5 is :" << factorial_of_n(5)<<std::endl;

    std::cout << "The Result of power of function for 2^5 is :"<< power_of_m_n(2, 5)<< std::endl;

    std::cout << "The Result of power of function reducing no.of multiplication for 2^5 is :"<<power_of_m_n_reducing_multiplications(2, 5)<< std::endl;

    std::cout << "The Result of taylor series for e^x for 4 terms is :"<< taylor_series_e_pow_x_function(3, 4);

    std::cout << "The Result of Fibonacci series of 7th term is :"<< fibonacci_series(7)<< std::endl;

    std::cout << "The result of Fibonacci series of 7th term by reducing excessive recurssion is: "<<fibonacci_series_red_exce_recurssion(7)<< std::endl;
    return 0;
}