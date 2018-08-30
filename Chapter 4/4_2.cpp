// insrt2_string.cpp

#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;
    using std::getline;

    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
