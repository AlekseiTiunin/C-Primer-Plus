//arrfun_ptr.cpp
#include <iostream>
const int Max = 5;

double * fill_array(double * array, int limit);
void show_array(const double * array, double * end);
void revalue(double r, double * array, double * end);
int main()
{
    using namespace  std;
    double properties[Max];
    double * end = fill_array(properties, Max);
    show_array(properties, end);
    if (end > properties)
    {
        cout << "Enter revaliation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();

    return 0;
}

double * fill_array(double * array, int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        array[i] = temp;
    }

    return &array[i];
}

void show_array(const double * array, double * end)
{
    using namespace std;
    const double * current;
    int i = 0;

    for (current = array; current < end; current++, i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *current << endl;
    }
}

void revalue(double r, double * array, double * end)
{
    for (double * current = array; current < end; current++)
        *current *=r;
}
