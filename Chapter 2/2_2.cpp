//furlong_to_yards.cpp

#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "Enter the distance in furlong" << endl;
    int distance;
    cin >> distance;
    cout << "Distance in yards = " << distance * 220;

    return 0;
}
