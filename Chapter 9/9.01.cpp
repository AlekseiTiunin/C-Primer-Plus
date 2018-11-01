#include <iostream>
#include "golf.h"
const size_t MemNum = 5;

int main()
{
	golf club[MemNum];
	setgolf(club[0], "Founder Jack", 100);
	size_t i = 1;
	std::cout << "Member " << i << ":\n";
	while (i < MemNum && setgolf(club[i]))
	{
		i++;
		std::cout << "Member " << i << ":\n";		
	}
	for (size_t j = 0; j < i; j++)
		showgolf(club[j]);
	return 0;
}

