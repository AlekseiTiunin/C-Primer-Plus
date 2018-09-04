// ctypefilter.cpp
#include <iostream>
#include <ctype.h>

int main()
{
    using std::cout;
    using std::cin;

    char ch;

    while ((ch = cin.get()) != '@')
    {
        if (isdigit(ch))
            continue;
        else if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
        cout << ch;
    }

    return 0;
}
