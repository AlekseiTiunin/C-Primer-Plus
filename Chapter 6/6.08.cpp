// symbolcount.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;
    using std::fstream;

    fstream inFile;
    inFile.open("text.txt");
    if (!inFile.is_open())
    {
        cout << "Could not open file.";
        exit(EXIT_FAILURE);
    }

    int nSymbols = 0;
    char ch;
    while ((ch = inFile.get()) != EOF)
    {
        nSymbols++;
    }

    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Data mismatch.\n";
    else
        cout << "Unknown error.\n";

    if (nSymbols == 0)
        cout << "No data read.";
    else
        cout << "Number of symbols = " << nSymbols << endl;

    cout << "End of programm." << endl;

    return 0;
}

