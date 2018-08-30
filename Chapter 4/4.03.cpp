// str_cpy_cat.cpp

#include <iostream>
#include <cstring>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const int kSize = 20;
    char first_name[kSize];
    char last_name[kSize];
    char full_name[2 * kSize + 2];

    cout << "Enter your first name:\n";
    cin.getline(first_name, kSize);
    cout << "Enter your second name:\n";
    cin.getline(last_name, kSize);
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}
