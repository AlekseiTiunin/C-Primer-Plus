// population.cpp

#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    long long population_world, population_russia;

    cout << "Enter the world's population: ";
    cin >> population_world;
    cout << "Enter the population of the Russia: ";
    cin >> population_russia;
    cout << "The population of the Russia is "
         << double(population_russia) / double(population_world) * 100.0
         << "% of the world population.";

    return 0;
}
