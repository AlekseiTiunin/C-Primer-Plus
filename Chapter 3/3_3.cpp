// latitude_to_dec.cpp

#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const double kDegToMin = 60;
    const double kMinToSec = 60;

    double latitude_sec, latitude_min, latitude_deg;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> latitude_deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> latitude_min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> latitude_sec;
    cout << int(latitude_deg) << " degrees, " << int(latitude_min) << " minutes "
         << int(latitude_sec) << " seconds = "
         << latitude_deg + (latitude_min + latitude_sec / kMinToSec) / kDegToMin
         << " degrees" << endl;

    return 0;
}
