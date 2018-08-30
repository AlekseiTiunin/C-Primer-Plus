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

    CandyBar * snack = new CandyBar[3];
    snack[0] =
        {
            "Mocha Munch",
            2.3f,
            350
        };
    snack[1] =
        {
            "Tasty candy",
            2.6f,
            250
        };
    snack[2] =
        {
            "Not tasty candy",
            4.9f,
            145
        };

    cout << "Name: " << snack[0].name << endl
         << "Weight: " << snack[0].weight << endl
         << "Caloricit: " << snack[0].caloricity << endl << endl;

    cout << "Name: " << snack[1].name << endl
         << "Weight: " << snack[1].weight << endl
         << "Caloricit: " << snack[1].caloricity << endl << endl;

    cout << "Name: " << snack[2].name << endl
         << "Weight: " << snack[2].weight << endl
         << "Caloricit: " << snack[2].caloricity << endl << endl;

    return 0;
}
