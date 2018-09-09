//a.cpp
#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
static const char * Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};

void fill(double *pa, int);
void show(double *da, int);

int main()
{
    double expenses[Seasons];
    fill(expenses, Seasons);
    show(expenses, Seasons);

    return 0;
}

void fill(double *pa, int)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(double *da, int)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
