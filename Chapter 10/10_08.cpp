#include <iostream>
#include "list.h"

void print(Item & item);
void inc(Item & item);
int main()
{
	List list;
	for (int i = 0; i < 5; i++)
		list.Add(i);
	list.Visit(print);
	list.Visit(inc);
	std::cout << std::endl;
	list.Visit(print);

}

void print(Item & item)
{
	std::cout << item;
}

void inc(Item & item)
{
	item++;
}
