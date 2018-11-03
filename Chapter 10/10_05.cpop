#include <iostream>
#include "stack.h"

const int CUSTNUM = 4;

int main()
{
	customer mycust[CUSTNUM] =
	{
		{"1111", 100},
		{"2222", 200},
		{"3333", 300},
		{"4444", 400}
	};
	customer temp;
	Stack stack;
	double fullpay = 0;
	for (int i = 0; i < CUSTNUM; i++)
		stack.push(mycust[i]);
	stack.pop(temp);
	fullpay += temp.payment;
	std::cout << "Customer " << temp.fullname << "Payment " << temp.payment << "Full payment: " << fullpay << std::endl;
	strcpy(temp.fullname, "5555");
	temp.payment = 500;
	stack.push(temp);
	for (int i = 0; i < 4; i++)
	{
		stack.pop(temp);
		fullpay += temp.payment;
		std::cout << "Customer " << temp.fullname << "Payment " << temp.payment << "Full payment: " << fullpay << std::endl;
	}
}
