// str_cpy_cat.cpp

#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;
    using std::getline;

    string first_name;
    string last_name;
    string full_name;

    cout << "Enter your first name:\n";
    getline(cin, first_name);
    cout << "Enter your second name:\n";
    getline(cin, last_name);
    full_name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}
