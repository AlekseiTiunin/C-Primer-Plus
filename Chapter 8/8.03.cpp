#include <iostream>
#include <string>
#include <cctype>

void To_Upper_String(std::string & str);

int main(void)
{
	std::string str;

	std::cout << "Enter a string (q to quit): \n";
	while (std::getline(std::cin, str) && str != "q")
	{
		To_Upper_String(str);
		std::cout << str << std::endl;
		std::cout << "Enter a string (q to quit): \n";
	}
	std::cin.clear();	
	std::cout << "Bye" << std::endl;
	return 0;
}

void To_Upper_String(std::string & str)
{
	size_t i = 0;
	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
}
