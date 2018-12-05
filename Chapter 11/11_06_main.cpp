#include <iostream>
#include "stonewt.h"

int main()
{
	using std::cout;
	
	Stonewt weights[6] = { {11, 0.0}, {120}, { 11.0} };
	for (size_t i = 0; i < 3; i++)
	{
		float lbs;
		std::cout << "Enter weight in lbs.\n";
		std::cin >> lbs;
		weights[i + 3] = Stonewt(lbs);
	}
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << i << ": " << weights[i];
	}

	Stonewt min = weights[0];
	std::cout << "min weight: ";
	for (size_t i = 1; i < 6; i++)
	{
		if (weights[i] < min)
			min = weights[i];
	}
	std::cout << min << std::endl;

	Stonewt max = weights[0];
	std::cout << "max weight: ";
	for (size_t i = 1; i < 6; i++)
	{
		if (weights[i] > max)
			min = weights[i];
	}
	std::cout << max << std::endl;

	size_t count = 0;
	for (size_t i = 0; i < 6; i++)
	{
		if (weights[i] >= Stonewt(11, 0.0))
			count++;
	}
	std::cout << "Number of weights > 11 stouns = " << count << std::endl;
	
	return 0;
}
