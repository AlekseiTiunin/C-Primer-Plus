#pragma once
#include <string>
class Account
{
private:
	std::string m_name;
	std::string m_accnum;
	double m_balance;
public:
	Account(std::string name = "Foo", std::string account = "Bar", double balance = 0.0);
	void Show() const;
	void Add(double money);
	void Withdraw(double money);
};

