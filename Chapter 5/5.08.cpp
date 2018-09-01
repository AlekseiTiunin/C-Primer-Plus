// chararray.cpp
#include <iostream>
#include <cstring>

const int kMaxWordSize = 30;

int main()
{
    char word[kMaxWordSize];
    int wordcount = 0;

    std::cout << "Enter words (type \"done\" for end):" << std::endl;
    while (strcmp(word, "done"))
    {
        std::cin >> word;
        wordcount++;
    }
    std::cout << "You entered " << wordcount - 1 << " words." << std::endl;

    return 0;
}
