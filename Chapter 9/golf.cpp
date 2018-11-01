#include "golf.h"
#include <iostream>
#include <cstring>
inline void Clearbuffer(void)
{
	while (std::cin.get() != '\n')
		continue;
}
void setgolf(golf & g, const char * name, int hc)
{
	strncpy(g.fullname, name, Len);
	g.handicap = hc;
}
int setgolf(golf & g)
{
	std::cout << "Enter fullname: ";
	std::cin.getline(g.fullname, Len);
	if (!strcmp(g.fullname, ""))
		return 0;
	std::cout << "Enter handicap: ";
	std::cin >> g.handicap;
	Clearbuffer();
	return 1;
}
void handicap(golf &g)
{
	std::cout << "Enter a new handicap: ";
	std::cin >> g.handicap;
}
void showgolf(const golf & g)
{
	std::cout << "Full name: " << g.fullname << ", handicap: " << g.handicap << std::endl;
}

