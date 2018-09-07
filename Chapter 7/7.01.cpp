//med_harm.cpp
#include <iostream>

double med_harm(int , int);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int number_1, number_2;

    cout << "Eneter a pair of numbers (enter 0 to quit): ";
    while ((cin >> number_1 >> number_2) && number_1 != 0 && number_2 != 0)
    {
        cout << "Med harmonic of " << number_1 << " and " << number_2
             << " = " << med_harm(number_1, number_2) << endl
             << "Eneter a pair of numbers (enter 0 to quit): ";
    }

    return 0;
}

double med_harm(int x, int y)
{
    return 2.0 * x * y / (x + y);
}
