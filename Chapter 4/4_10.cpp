// simple_array.cpp
#include <iostream>
#include <array>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::array;

    array<float, 3> result;
    cout << "Enter first 40 m race result: ";
    cin >> result[0];
    cout << "Enter second 40 m race result: ";
    cin >> result[1];
    cout << "Enter third 40 m race result: ";
    cin >> result[2];
    cout << "Mean result = "
         << (result[0] + result[1] + result[2]) / 3
         << " s." << endl;

    return 0;
}
