#include <iostream>

int main()
{

    int a;
    int b;
    
    std::cout << "Enter variable a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter variable b: " << std::endl;
    std::cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    std::cout << "a: " << a << std::endl << "pointer a: " << ptrA << std::endl;
    std::cout << "b: " << b << std::endl << "pointer b: " << ptrB << std::endl;
}