#include <iostream>

int main(int argc, char const *argv[])
{
    int input;
    std::cout << "Type a number: ";
    std::cin >> input;
    factorial(input);

    return 0;
}

int factorial(int n)
    {
        if(n==1) return 1;
        return n*factorial(n-1);
    }