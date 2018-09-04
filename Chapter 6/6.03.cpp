// donat.cpp
#include <iostream>
#include <cstring>

const int MAXSIZE  = 10;

char showmenu();

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char ch;

    cout << "Please enter one of the following choices:\n"
         << "c) carnivore   p) pionist\n"
         << "t) tree        g) game\n";
    ch = cin.get();
    while (!strchr("ctpg", ch))
    {
        cout << "Please enter a c, p, t or g:";
        std::cin.clear(); // using cin.clear() to flush cin after entering eof (ctrl-Z combination);
        ch = cin.get();
    }
    switch (ch)
    {
    case 'c' : cout << "A carnivore meaning meat eater." << endl;
        break;
    case 'p' : cout << "The Pianist is a 2002 biographical drama film." << endl;
        break;
    case 't' : cout << "A maple is a tree." << endl;
        break;
    case 'g' : cout << "A game is a structured form of play" << endl;
        break;
    default : cout << "Unknown error." << endl;
    }

    return 0;
}

