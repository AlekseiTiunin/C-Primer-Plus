#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class complex
{
private:
	double real;
	double imaginary;
public:
	complex();
	complex(double r, double i);

	~complex();

	complex operator+(const complex & b) const;
	complex operator-(const complex & b) const;
	complex operator*(const complex & b) const;
	complex operator*(double x) const;
	complex operator~() const;

	friend complex operator*(double n, const complex & a);
	friend std::ostream & operator<<(std::ostream & os, const complex & a);
	friend std::istream & operator>>(std::istream & os, complex & a);
};

#endif 
