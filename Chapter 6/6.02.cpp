// donat.cpp
#include <iostream>
#include <ctype.h>

const int MAXSIZE  = 10;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double temp;
    double donations[MAXSIZE]{0};
    double med = 0;
    int i;
    int donat_lower = 0;

    cout << "Enter donations sizes (character to end):" << endl;
    for (i = 0; i < MAXSIZE ; i++)
    {
        cout << i + 1 << "th donation: ";
        if(cin >> donations[i])
            med += donations[i];
        else
            break;
    }
    if (i > 0)
        med /= i;
    for (int j = 0; j < i; j++)
        if (donations[j] < med)
            donat_lower++;
    cout << "Med donation = " << med
         << ", number of donation lower than med = " << donat_lower
         << "\ntotal number = "<< i << endl;

    return 0;
}
