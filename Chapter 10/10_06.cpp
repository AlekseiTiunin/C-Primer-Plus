#include <iostream>
#include "move.h"
int main()
{
	Move cat = Move();
	Move rat = Move(200, 300);
	std::cout << "Rat is at ";
	rat.showmove();
	std::cout << std::endl;
	std::cout << "Cat is at ";
	cat.showmove();
	std::cout << std::endl;
	cat = cat.add(rat);
	std::cout << "Cat is at ";
	cat.showmove();
	std::cout << std::endl;
	std::cout << "Rat is dead, new rat appear at ";
	rat.reset(30, 40);
	rat.showmove();
}
