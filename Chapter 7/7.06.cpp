//array_reverse.cpp
#include <iostream>


using std::cout;
using std::cin;
using std::endl;

const unsigned nMaxSize = 10;

unsigned Fill_array(double *, unsigned);
void Show_array(const double *, unsigned);
void Reverse_array(double *, unsigned);

int main()
{
    unsigned size = nMaxSize;
    double array[nMaxSize];

    size = Fill_array(array, size);
    Show_array(array, size);
    cout << "Array reverse: " << endl;
    Reverse_array(array, size);
    Show_array(array, size);

    cout << "End of programm." << endl;

    return 0;
}

unsigned Fill_array (double array[], unsigned maxsize)
{
    unsigned i = 0;
    cout << "Max size of array = " << maxsize << endl;
    cout << "Enter q to stop" << endl;
    cout << "Enter " << i << "th element : ";
    while ((cin >> array[i]) && i < maxsize - 1)
    {
        i++;
        cout << "Enter " << i << "th element : ";
    }

    return  i + 1;
}

void Show_array(const double array[], unsigned size)
{
    cout << "Array: " << endl;
    for (unsigned i = 0; i < size; i++)
        cout << i << ": " << array[i] << endl;
}

void Reverse_array(double array[], unsigned size)
{
    double temp;
    for (unsigned i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}
