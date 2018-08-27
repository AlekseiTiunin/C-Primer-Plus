// height_converter.cpp

#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const int kInchToFoot = 12;
    int height;

    cout << "Type height in inches:" << endl;
    cin >> height;
    cout << "Your height is " << height / kInchToFoot
         << " foots and " << height % kInchToFoot << " inches" << endl;

    return 0;
}
