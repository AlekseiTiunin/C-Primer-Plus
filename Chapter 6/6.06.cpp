// patrons.cpp
#include <iostream>
#include <string>

const int Limit = 10000;

struct patron
{
    std::string name;
    double donation;
};

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int nMaecenas;

    cout << "Enter number of Maecenas: ";
    (cin >> nMaecenas).get();

    patron  * maecenas = new patron[nMaecenas];

    for (int i = 0; i < nMaecenas; i++)
    {
        cout << "Enter name of " << i + 1 << "th Maecenas: ";
        getline(cin, maecenas[i].name);
        cout << "Enter size of donation: ";
        (cin >> maecenas[i].donation).get();
    }

    int n = 0;

    cout << "Grand patrons:" << endl;

    for (int i = 0; i < nMaecenas; i++)
    {
        if (maecenas[i].donation >= Limit)
        {
            n++;
            cout << maecenas[i].name << " - " << maecenas[i].donation << "$" << endl;
        }
    }

    if (n == 0)
        cout << "none" << endl;

    n = 0;

    cout << "Patrons:" << endl;

    for (int i = 0; i < nMaecenas; i++)
    {
        if (maecenas[i].donation < Limit)
        {
            n++;
            cout << maecenas[i].name << " - " << maecenas[i].donation << "$" << endl;
        }
    }

    if (n == 0)
        cout << "none" << endl;

    cout << "End of programm.";

    return 0;
}

