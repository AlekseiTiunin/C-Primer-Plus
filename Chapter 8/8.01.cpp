#include <iostream>
#include <Windows.h>
void Print_String(const char * str, int n = 0);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char str[] = "C++";

	std::cout << "Call Print_String without second argument: \n";
	Print_String(str);
	std::cout << "Call Print_String 5 times with second argument: \n";
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << i << ": \n";
		Print_String(str, 1);
	}
	std::cout << std::endl;

	return 0;
}

void Print_String(const char * str, int n)
{
	static size_t uFunctionCalls;
	if (!n)
		std::cout << str << std::endl;
	else
		for (size_t i = 0; i < uFunctionCalls; i++)
			std::cout << str << std::endl;
	uFunctionCalls++;	
}
