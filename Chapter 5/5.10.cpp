// embcycle.cpp
#include <iostream>

int main()
{
    int iLineNum;

    std::cout << "Enter number of lines: ";
    std::cin >> iLineNum;

    for (int i = 0; i < iLineNum; i++)
    {
        for (int j = 1; j < iLineNum - i; j++)
            std::cout << ".";
        for (int k = iLineNum - i - 1; k < iLineNum; k++)
            std::cout << "*";
        std::cout << std::endl;
    }

    return 0;
}
