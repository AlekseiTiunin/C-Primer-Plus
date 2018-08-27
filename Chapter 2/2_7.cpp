//time_format.cpp

#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    int hours;
    int minuts;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minuts: ";
    cin >> minuts;
    cout << "Time: " << hours << ":" << minuts << endl;

    return 0;
}
