//light_years_to_au.cpp

#include <iostream>

double DistanceToAu(double); // convert distance in light years to au

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    double distance;

    cout << "Enter the number of the light years: ";
    cin >> distance;
    cout << distance << " light years = "
         << DistanceToAu(distance)
         << " astonomical units.";

    return 0;
}

double DistanceToAu(double distance)
{
    return 63240 * distance;
}
