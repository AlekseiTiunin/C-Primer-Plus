// lotto_complex.cpp
#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned numbers_mega);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    unsigned total_numfield, choices_numfield, total_mega;

    cout << "Enter the total number of choices on the number field and\n"
            "the number of picks allowed:\n";

    while ((cin >> total_numfield >> choices_numfield) && choices_numfield <= total_numfield)
    {
        cout << "Enter the total number of choices on mega number field and\n";
        if (!(cin >> total_mega))
            break;
        cout << "You have one chance in ";
        cout << probability(total_numfield, choices_numfield, total_mega);
        cout << " of winning.\n";
        cout << "Next numbers (q to quit): ";
    }
    cout << "bye\n";

    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned numbers_mega)
{
    long double result = 1.0l;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;

    return result * numbers_mega;
}
