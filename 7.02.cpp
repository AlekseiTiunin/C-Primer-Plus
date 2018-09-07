//game_results.cpp
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int nMaxSize = 10;

int game_input(int * array, int max_size);
void game_display(const int * array, int size);
void game_med(const int * array, int size);

int main()
{
    int game_result[10];
    int size;

    size = game_input(game_result, nMaxSize);
    game_display(game_result, size);
    game_med(game_result, size);

    cout << "Program end.";

    return 0;
}

int game_input(int * array, int max_size)
{
    int i = 0;
    cout << "Enter 1th game result (enter letter to end): ";
    while(i < max_size && cin >> array[i])
    {
        if ( i < max_size)
            cout << "Enter " << i + 1 << "th game result (enter letter to end): ";
        else
            cout << "Max size reached." << endl;
        i++;
    }

    return i;
}

void game_display(const int * array, int size)
{
    cout << "Game results: " << endl;
    for (int i = 0; i < size; i++)
        cout << i + 1 << "th game result: " << array[i] <<endl;
}

void game_med(const int * array, int size)
{
    double med = 0.0;

    for (int i = 0; i < size; i++)
        med += double(array[i]);
    med /= double(size);

    cout << "Medium result = " << med << endl;
}



















