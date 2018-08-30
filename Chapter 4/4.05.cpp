// simple_struct.cpp

#include <iostream>
#include <string>

struct CandyBar
{
   std::string name;
   float weight;
   int caloricity;
};

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::getline;
    using std::string;

    CandyBar snack =
    {
        "Mocha Munch",
        2.3f,
        350
    };

    cout << "Name: " << snack.name << endl
         << "Weight: " << snack.weight << endl
         << "Caloricit: " << snack.caloricity << endl;

    return 0;
}
