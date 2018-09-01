// carstruct.cpp
#include <iostream>
#include <string>

struct car
{
    std::string manufacturer;
    int year;
};

int main()
{
    int nsize;
    car * ptrcar;
    std::cout << "Enter number of cars to catalogue: ";
    (std::cin >> nsize).get();
    ptrcar = new car [nsize];
    for (int i = 0; i < nsize; i++)
    {
        std::cout << "Car #" << i + 1 <<":" << std::endl;
        std::cout << "Enter a manufacturer: ";
        getline(std::cin, ptrcar[i].manufacturer);
        std::cout << "Enter year of issue: ";
        (std::cin >> ptrcar[i].year).get();
    }
    std::cout << "Your catalog: " << std::endl;
    for (int i = 0; i < nsize; i++)
        std::cout << ptrcar[i].year << " " << ptrcar[i].manufacturer << std::endl;

    delete [] ptrcar;

    return 0;
}
