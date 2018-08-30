// simple_struct2.cpp

#include <iostream>

const int kNameSize = 30;

struct Pizza
{
   char name[kNameSize];
   float diameter;
   float weight;
};

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    Pizza tasty_pizza;

    cout << "Enter name of pizza: ";
    cin.getline(tasty_pizza.name, kNameSize);
    cout << "Enter diameter of pizza: ";
    (cin >> tasty_pizza.diameter).get();
    cout << "Enter weight of pizza: ";
    cin >> tasty_pizza.weight;
    cout << endl << "Name of pizza: " << tasty_pizza.name << endl;
    cout << "Diameter of pizza: " << tasty_pizza.diameter << endl;
    cout << "Weight of pizza: " << tasty_pizza.weight << endl;

    return 0;
}
