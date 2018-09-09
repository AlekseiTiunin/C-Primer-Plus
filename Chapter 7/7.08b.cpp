//b.cpp
#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
static const char * Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};

struct expense
{
    double money[Seasons];
};

void fill(expense *pa, int);
void show(expense da, int);

int main()
{
    expense expenses;
    fill(&expenses, Seasons);
    show(expenses, Seasons);

    return 0;
}

void fill(expense *pa, int)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->money[i];
    }
}

void show(expense da, int)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da.money[i] << endl;
        total += da.money[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
