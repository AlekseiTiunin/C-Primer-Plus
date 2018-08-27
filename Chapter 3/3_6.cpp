// fuel_cons.cpp

#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int distance, fuel;

    cout << "Fuel consumption calculator:\nEnter the distance in km: ";
    cin >> distance;
    cout << "Enter the fuel consumed in liter: ";
    cin >> fuel;
    cout << "Fuel consumption per 100 km = "
         << double(fuel) / double(distance) * 100.0
         << " l/100 km " << endl;

    return 0;
}
