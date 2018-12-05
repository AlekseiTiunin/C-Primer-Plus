#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs, Mode mode)
{	
	if (mode != INTLBS && mode != FLOATLBS && mode != STONE)
	{
		std::cout << "Mode must be INTLBS, FLOATLBS or STONE.\n";
		std::cout << "Setting weight to 0.\n";
		stone = 0;
		pds_left = 0;
		lbs = 0;
		state = FLOATLBS;
	}
	else
	{
		stone = int(lbs) / Lbs_per_stn;
		pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
		pounds = lbs;
		state = mode;
	}
}

Stonewt::Stonewt(int lbs, Mode mode)
{
	if (mode != INTLBS && mode != FLOATLBS && mode != STONE)
	{
		std::cout << "Mode must be INTLBS, FLOATLBS or STONE.\n";
		std::cout << "Setting weight to 0.\n";
		stone = 0;
		pds_left = 0;
		lbs = 0;
		state = FLOATLBS;
	}
	else
	{
		stone = int(lbs) / Lbs_per_stn;
		pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
		pounds = lbs;
		state = mode;
	}
}


Stonewt::Stonewt(int stn, double lbs, Mode mode)
{
	if (mode != INTLBS && mode != FLOATLBS && mode != STONE)
	{
		std::cout << "Mode must be INTLBS, FLOATLBS or STONE.\n";
		std::cout << "Setting weight to 0.\n";
		stone = 0;
		pds_left = 0;
		lbs = 0;
		state = FLOATLBS;
	}
	else
	{
		stone = stn;
		pds_left = lbs;
		pounds = stn * Lbs_per_stn + lbs;
		state = mode;
	}
}

Stonewt::Stonewt()
{
	stone = 0;
	pounds = pds_left = 0;
	state = FLOATLBS;
}

Stonewt::~Stonewt()
{
}

void Stonewt::SetMode(Mode mode)
{
	state = mode;
}

Stonewt Stonewt::operator+(const Stonewt & b) const
{
	return Stonewt(pounds + b.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & b) const
{
	return Stonewt(pounds - b.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
	return Stonewt(n * pounds);
}

Stonewt operator*(double n, const Stonewt &a)
{
	return a * n;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & stn)
{
	if (stn.state == FLOATLBS)
	{
		std::cout << stn.pounds << " pounds.\n";
	}
	else if (stn.state == INTLBS)
	{
		std::cout << static_cast<int>(stn.pounds) << " integer pounds.\n";
	}
	else if (stn.state == STONE)
	{
		std::cout << stn.stone << " stones, " << stn.pds_left << " pounds\n";
	}
	return os;
}
