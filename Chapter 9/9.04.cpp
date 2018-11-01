#include <iostream>
#include "sales.h"


int main()
{
	double defaultsales[] = { 20, 30, 50, 40, 34 };
	SALES::Sales sale[2];
	SALES::setSales(sale[0]);
	SALES::setSales(sale[1], defaultsales, 5);
	SALES::showSales(sale[0]);
	SALES::showSales(sale[1]);
	return 0;
}
