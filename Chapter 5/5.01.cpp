// simple_for.cpp
#include <iostream>

int main()
{
    int start, end, sum = 0;

    std::cout << "Enter start of interval: ";
    std::cin >> start;
    std::cout << "Enter end if interval: ";
    std::cin >> end;

    for (int i = start; i <= end; i++)
        sum += i;

    std::cout <<" Sum from start to end = " << sum << std::endl;

    return 0;
}
