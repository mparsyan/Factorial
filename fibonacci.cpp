#include <iostream>

int fib(int index)
{
    return (index < 0) ? throw std::invalid_argument("Invalid argument!") :
           (index == 0) ? 0 :
           (index == 1) ? 1 :
           fib(index - 1) + fib(index - 2);
}

int main()
{
    int n;
    std::cout << "Please enter the index: ";
    std::cin >> n;
    std::cout << "The nth element is: " << fib(n) << std::endl; 
    return 0;
}

