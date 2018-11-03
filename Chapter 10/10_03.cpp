
#include <iostream>
#include "golf.h"
const size_t MemNum = 5;

int main()
{
	Golf club[MemNum];
	club[0] = Golf("Founder Jack", 100);
	size_t i = 1;
	std::cout << "Member " << i << ":\n";
	while (i < MemNum && club[i].setgolf())
	{
		i++;
		std::cout << "Member " << i << ":\n";
	}
	for (size_t j = 0; j < i; j++)
		club[j].showgolf();
	return 0;
}
