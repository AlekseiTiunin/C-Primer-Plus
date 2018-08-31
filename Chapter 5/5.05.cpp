// sales.cpp
#include <iostream>
#include <string>

int main()
{
    const int nMonth = 12;
    const std::string kMonths[nMonth] = {"January",
                                     "February",
                                     "March",
                                     "April",
                                     "May",
                                     "June",
                                     "July",
                                     "August",
                                     "September",
                                     "October",
                                     "November",
                                     "December"};
    int nsales[nMonth], nsum = 0;
    for (int i = 0; i < nMonth; i++)
    {
        std::cout << "Enter sales for " << kMonths[i] << " : ";
        std::cin >> nsales[i];
    }
    for (int i = 0; i < nMonth; i++)
        nsum += nsales[i];
    std::cout << "Total sales for year = " << nsum << std::endl;

    return 0;
}
