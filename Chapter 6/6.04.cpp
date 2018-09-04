// bop.cpp
#include <iostream>

const int SIZE  = 4;
const int strsize = 30;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

void showmenu();

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    bop order_1[SIZE]
    {
        {"Wimp Macho", "Junior", "Picaso", 0},
        {"Raki Rhodes", "Middle", "Pushkin", 1},
        {"Hoppy Hipman", "Senior", "Bairon", 2},
        {"Pat Hand", "Big Boss", "Snake", 1}
    };
    char ch;
    showmenu();
    while ((ch = cin.get()) != 'q')
    {
        cin.ignore(10,'\n');
        cin.clear();
        switch (ch)
        {
        case 'a' :
            for (int i = 0; i < SIZE; i++)
                std::cout << order_1[i].fullname << std::endl;
            break;
        case 'b' :
            for (int i = 0; i < SIZE; i++)
                std::cout << order_1[i].title << std::endl;
            break;
        case 'c' :
            for (int i = 0; i < SIZE; i++)
                std::cout << order_1[i].bopname << std::endl;
            break;
        case 'd' :
            for (int i = 0; i < SIZE; i++)
            {
                if (order_1[i].preference == 0)
                    std::cout << order_1[i].fullname << std::endl;
                else if (order_1[i].preference == 1)
                    std::cout << order_1[i].title << std::endl;
                else
                    std::cout << order_1[i].bopname << std::endl;
            }
            break;
        default:
            cout << "Enter a,b,c,d or q." << endl;
        }
        showmenu();
    }
    cout << "End of programm." << endl;
    
    return 0;
}

void showmenu()
{
    using std::cout;
    cout << "Please enter one of the following choices:\n"
         << "a) display by name     b) display by title\n"
         << "c) display by bopname  d) display by preference\n"
         << "q) quit\n";
}

