// patrons.cpp
#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    string temp;
    int nVowels = 0, nConsonants = 0, nOther = 0;

    while ((cin >> temp) && temp != "q")
    {
        if (isalpha(temp[0]))
        {
            if (strchr("AEIOUaeiou", temp[0]))
                nVowels++;
            else
                nConsonants++;
        }
        else
            nOther++;
    }

    cout << nVowels << " words beginning with vowels\n"
         << nConsonants << " words beginning with consonants\n"
         << nOther << " others\n";

    cout << "End of programm." << endl;

    return 0;
}

