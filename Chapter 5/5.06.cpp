// sales2.cpp
#include <iostream>
#include <string>

int main()
{
    const int nMonth = 12;
    const int nYears = 3;
    const std::string kMonths[nMonth]{"January",
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
    int nsales[nYears][nMonth], nsum[nYears]{}, ntotalsum = 0;
    for (int j = 0; j < nYears; j++)
    {
        std::cout << "Year " << j + 1 << ":" << std::endl;
        for (int i = 0; i < nMonth; i++)
        {
            std::cout << "Enter sales for " << kMonths[i] << ": ";
            std::cin >> nsales[j][i];
        }
    }
    for (int j = 0; j < nYears; j++)
    {
        for (int i = 0; i < nMonth; i++)
            nsum[j] += nsales[j][i];
        std::cout << "Sales for year" << j + 1 << " = " << nsum[j] << std::endl;
        ntotalsum += nsum[j];
    }
    std::cout << "Total sales = " << ntotalsum << std::endl;

    return 0;
}
