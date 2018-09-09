//factorial.cpp
#include <iostream>

long double factorial_recurcive(int number);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int number;

    cout << "Enter a number (q to exit): ";
    while ((cin >> number) && number >= 0)
    {
        cout << number << "! = " << factorial_recurcive(number) << endl;
        cout << "Enter next number (q to exit): ";
    }

    cout << "End of programm." << endl;

    return 0;
}

long double factorial_recurcive(int number)
{
    if (number == 0)
        return 1;
    else
        return number * factorial_recurcive(number - 1);
}









