#include "account.h"
#include <iostream>

Account::Account(std::string name, std::string accnum, double balance)
{
	m_name = name;
	m_accnum = accnum;
	m_balance = balance;
}
void Account::Show() const
{
	std::cout << "Name: " << m_name << ", Account number: " << m_accnum << ", Balance = " << m_balance << std::endl;
}
void Account::Add(double money)
{
	m_balance += money;
}
void Account::Withdraw(double money)
{
	m_balance -= money;
}
