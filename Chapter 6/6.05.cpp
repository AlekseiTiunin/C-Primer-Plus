// tax.cpp
#include <iostream>

const int RangeNum = 4;
const int Limit[RangeNum + 1] = {0, 5000, 10000, 20000, 35000};
const float TaxRate[RangeNum] = {0.0f, 0.1f, 0.15f, 0.2f};

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int income;
    float tax = 0;

    cout << "Enter your income (non number for end): ";
    while(cin >> income)
    {
        for (int i = 0; i < RangeNum; i++)
        {
            if (income > Limit[i] && income > Limit[i + 1] && i < RangeNum - 1) // Programm sequential check that remainder of income
            {                                                                   // exceed interval of tax ranges and that income exceed non linear
                tax += Limit[i + 1]* TaxRate[i];                                // non linear part of tax rate. If income less than interval or we
                income  -= Limit[i + 1];                                        // then we in linear part we can directly compute remainder of tax.
            }
            else
            {
                tax += income * TaxRate[i];
                break;
            }
        }
        cout << "Yout tax = " << tax << endl;
        tax = 0;
        cout << "Enter your income (non number for end): ";
    }
    cout << "End of programm!" << endl;
    return 0;
}

