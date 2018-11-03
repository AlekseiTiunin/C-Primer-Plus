#include "sales.h"
#include <iostream>
namespace SALES
{
	Sales::Sales()
	{
		double def[QUARTERS] = { 0 };
		*this = Sales(def, QUARTERS);
	}
	Sales::Sales(const double * ar, int n)
	{
		size_t number = (n > 4) ? 4 : n;
		double sum = ar[0];
		max = ar[0];
		min = ar[0];
		sales[0] = ar[0];
		for (size_t i = 1; i < number; i++)
		{
			sales[i] = ar[i];
			sum += ar[i];
			if (ar[i] > max)
				max = ar[i];
			else if (ar[i] < min)
				min = ar[i];
		}
		average = sum / number;
		for (size_t i = number; i < QUARTERS; number++)
			sales[i] = 0;
	}
	void Sales::set()
	{
		double ar[QUARTERS];
		for (size_t i = 0; i < QUARTERS; i++)
		{
			std::cout << "Enter sales in " << i + 1 << " quarter: ";
			std::cin >> ar[i];
		}
		*this = Sales(ar, QUARTERS);
	}
	void Sales::show() const
	{
		for (size_t i = 0; i < QUARTERS; i++)
			std::cout << sales[i] << " ";
		std::cout << "\n average = " << average << " max = " << max << " min = " << min << std::endl;
	}
}
