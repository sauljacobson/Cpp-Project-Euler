#include <iostream>

int main()
{
    int sum_squares = 0;
    int sum = 0;

    for (int i = 1; i <= 100; i++){
        sum_squares += i * i;
        sum += i;
    }

std::cout <<  (sum * sum) - sum_squares << std::endl;
}