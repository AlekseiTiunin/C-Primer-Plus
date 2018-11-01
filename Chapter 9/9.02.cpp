#include <iostream>
#include <string>

void strcount(std::string str);

int main()
{
	std::string input;
	std::cout << "Enter a line: \n";
	std::getline(std::cin, input);
	while (input != "")
	{
		strcount(input);
		std::cout << "Enter next line (empty line to quit):\n";
		std::getline(std::cin, input);
	}
	std::cout << "Bye\n";

	return 0;
}

void strcount(std::string str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	while (str[count])
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
