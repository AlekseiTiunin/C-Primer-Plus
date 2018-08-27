//temp_cel_to_fahr.cpp

#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    int tempurature;

    cout << "Please enter a Celsius value: ";
    cin >> tempurature;
    cout << tempurature <<" degrees Celsius is "
         << 1.8 * tempurature + 32
         << " degrees Fahrenheit";

    return 0;
}
