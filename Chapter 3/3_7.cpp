// fuel_cons_converter.cpp

#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const double kKmToMiles = 62.14 / 100.0;
    const double kGallonToLiter = 3.875;

    double fuel_cons_eu, fuel_cons_usa;

    cout << "Enter fuel consumption in european style (l / 100 km): ";
    cin >> fuel_cons_eu;

    fuel_cons_usa = (1 / fuel_cons_eu * 100) * (kGallonToLiter * kKmToMiles);

    cout << "Fuel consumption in USA style: "
         << fuel_cons_usa << " miles per gallon" << endl;

    return 0;
}
