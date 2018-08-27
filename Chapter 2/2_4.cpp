//age_in_months.cpp

#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    int age;

    cout << "Enter you age: ";
    cin >> age;
    cout << "Your age in months is " << age * 12;

    return 0;
}
