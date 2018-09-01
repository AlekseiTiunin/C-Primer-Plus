// stringcmp.cpp
#include <iostream>
#include <string>

int main()
{
    std::string word;
    int wordcount = 0;

    std::cout << "Enter words (type \"done\" for end):" << std::endl;
    while (word != "done")
    {
        std::cin >> word;
        wordcount++;
    }
    std::cout << "You entered " << wordcount - 1 << " words." << std::endl;

    return 0;
}
