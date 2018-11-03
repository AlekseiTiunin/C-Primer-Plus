#include <iostream>
#include "person.h"
Person::Person(const std::string &ln, const char * fn)
{
	lname = ln;
	strncpy(fname, fn, LIMIT);
}
void Person::Show() const
{
	std::cout << fname << " " << lname;
}
void Person::FormalShow() const
{
	std::cout << lname << " " << fname;
}

