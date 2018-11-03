#include <iostream>
#include "account.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Account driver.\n";
	Account Uninit;
	Account Init{ "Chack", "001", 500 };
	std::cout << "Un inizialized account:\n";
	Uninit.Show();
	std::cout << "Inizialized account:\n";
	Init.Show();
	Uninit.Add(100);
	std::cout << "Un inizialized account after adding:\n";
	Uninit.Show();
	Init.Withdraw(100);
	std::cout << "Inizialized account after withdraw:\n";
	Init.Show();

	cout << "Bye." << endl;
}
