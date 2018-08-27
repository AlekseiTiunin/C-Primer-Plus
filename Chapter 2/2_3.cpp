//three_func.cpp

#include <iostream>

void text_1(void);
void text_2(void);

int main(void)
{
    using std::cout;
    using std::endl;

    text_1();
    text_1();
    text_2();
    text_2();

    return 0;
}

void text_1(void)
{
    using std::cout;
    using std::endl;

    cout << "Three blind mice" << endl;
}

void text_2(void)
{
    using std::cout;
    using std::endl;

    cout << "See how they run" << endl;
}
