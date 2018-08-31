// sum.cpp
#include <iostream>

int main()
{
    int nsum = 0, ntemp;

    std::cout << "Enter a number: ";
    std::cin >> ntemp;
    while (ntemp)
    {
        nsum += ntemp;
        std::cout << "Enter next number: ";
        std::cin >> ntemp;
    }

    std::cout << "Sum of entered numbers = " << nsum << std::endl;

    return 0;
}
