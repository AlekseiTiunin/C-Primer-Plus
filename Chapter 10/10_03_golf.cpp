#include "golf.h"
#include <iostream>
#include <cstring>
inline void Clearbuffer(void)
{
	while (std::cin.get() != '\n')
		continue;
}

Golf::Golf(const char * name, int hc)
{
	strncpy(m_fullname, name, Len);
	m_handicap = hc;
}

int Golf::setgolf()
{
	char fullname[Len];
	int handicap;
	std::cout << "Enter fullname: ";
	std::cin.getline(fullname, Len);
	if (!strcmp(fullname, ""))
		return 0;
	std::cout << "Enter handicap: ";
	std::cin >> handicap;
	Clearbuffer();
	*this = Golf(fullname, handicap);
	return 1;
}
void Golf::sethandicap()
{
	std::cout << "Enter a new handicap: ";
	std::cin >> m_handicap;
}
void Golf::showgolf() const
{
	std::cout << "Full name: " << m_fullname << ", handicap: " << m_handicap << std::endl;
}
