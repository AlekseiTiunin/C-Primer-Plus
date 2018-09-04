// patrons_file.cpp
#include <iostream>
#include <string>
#include <fstream>

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
    using std::ifstream;

    int nMaecenas;
    ifstream inFile;

    inFile.open("text.txt");

    (inFile >> nMaecenas).get();

    patron  * maecenas = new patron[nMaecenas];

    for (int i = 0; i < nMaecenas; i++)
    {
        getline(inFile, maecenas[i].name);
        (inFile >> maecenas[i].donation).get();
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
    inFile.close();
    cout << "End of programm.";

    return 0;
}
