// latitude_to_dec.cpp

#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const int kHourToMin = 60;
    const int kMinToSec = 60;
    const int kDayToHour = 24;

    int time_sec, time_min, time_hour, time_day;

    cout << "Enter the number of seconds: ";
    cin >> time_sec;
    time_min = time_sec / kMinToSec;
    time_hour = time_min / kHourToMin;
    time_day = time_hour / kDayToHour;
    cout << time_sec << " seconds = " << time_day
         << " days, " << time_hour % kDayToHour << " hours, "
         << time_min % kHourToMin << " minutes, "
         << time_sec % kMinToSec << " seconds" << endl;

    return 0;
}
