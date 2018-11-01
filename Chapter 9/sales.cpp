#include "sales.h"
#include <iostream>
namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		size_t number = (n > 4) ? 4 : n;
		double sum = ar[0];
		s.max = ar[0];
		s.min = ar[0];
		s.sales[0] = ar[0];
		for (size_t i = 1; i < number; i++)
		{
			s.sales[i] = ar[i];
			sum += ar[i];
			if (ar[i] > s.max)
				s.max = ar[i];
			else if (ar[i] < s.min)
				s.min = ar[i];
		}
		s.average = sum / number;
		for (size_t i = number; i < QUARTERS; number++)
			s.sales[i] = 0;
	}
	void setSales(Sales & s)
	{
		double ar[QUARTERS];
		for (size_t i = 0; i < QUARTERS; i++)
		{
			std::cout << "Enter sales in " << i + 1 << " quarter: ";
			std::cin >> ar[i];
		}
		setSales(s, ar, QUARTERS);
	}
	void showSales(Sales & s)
	{
		for (size_t i = 0; i < QUARTERS; i++)
			std::cout << s.sales[i] << " ";
		std::cout << "\n average = " << s.average << " max = " << s.max << " min = " << s.min << std::endl;
	}
}
