#include <iostream>
#include "sales.h"


int main()
{
	using SALES::Sales;
	Sales sale[3];
	double defaultsales[] = { 20, 30, 50, 40, 34 };
	sale[0].set();
	sale[1] = Sales(defaultsales, 5);
	sale[0].show();
	sale[1].show();
	sale[2].show();
	return 0;
}
