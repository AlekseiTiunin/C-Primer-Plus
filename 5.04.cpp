// roi.cpp
#include <iostream>

int main()
{
    double fdafna_deposit_initial = 100.0;
    double fdafna_deposit = fdafna_deposit_initial;
    double fdafna_interest = 0.1;
    double fcleo_deposit = 100.0;
    double fcleo_interest = 0.05;
    int year = 0;

    do
    {
        fdafna_deposit += fdafna_deposit_initial * fdafna_interest;
        fcleo_deposit += fcleo_deposit * fcleo_interest;
        std::cout << "Year = " << year++ << std::endl
                  << "Dafna's current deposit = " << fdafna_deposit << std::endl;
        std::cout << "Cleo's current deposit = " << fcleo_deposit << std::endl;
    }
    while (fdafna_deposit > fcleo_deposit);

    return 0;
}
