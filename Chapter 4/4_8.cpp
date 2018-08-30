// simple_struct3.cpp

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

    Pizza * tasty_pizza;
    tasty_pizza = new Pizza;

    cout << "Enter diameter of pizza: ";
    cin >> tasty_pizza->diameter;
    cin.get(); // eat '/n' symbol;
    cout << "Enter name of company: ";
    cin.getline(tasty_pizza->name, kNameSize);
    cout << "Enter weight of pizza: ";
    (cin >> tasty_pizza->weight).get();
    cout << endl << "Name of company: " << tasty_pizza->name << endl;
    cout << "Diameter of pizza: " << tasty_pizza->diameter << endl;
    cout << "Weight of pizza: " << tasty_pizza->weight << endl;

    return 0;
}
