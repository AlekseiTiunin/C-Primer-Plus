#include <iostream>
#include "stonewt.h"

int main()
{
	using std::cout;
	Stonewt integerweight = Stonewt(100, INTLBS);
	Stonewt floatweight = Stonewt(12.5, FLOATLBS);
	Stonewt stoneweight = Stonewt(10, 5.5, STONE);
	std::cout << "integerweight = " << integerweight << std::endl;
	std::cout << "floatweight = " << floatweight << std::endl;
	std::cout << "stoneweight = " << stoneweight << std::endl;
	std::cout << "floatweight + integerweight = " << integerweight + floatweight << std::endl;
	std::cout << "stoneweight - integerweight = " << stoneweight - integerweight << std::endl;
	std::cout << "stoneweight * 2 = " << stoneweight * 2 << std::endl;
	std::cout << "2 * stoneweight = " << 2 * stoneweight << std::endl;
	floatweight.SetMode(INTLBS);
	std::cout << "Mode set to INTLBS, floatweight = " << floatweight << std::endl;
}
