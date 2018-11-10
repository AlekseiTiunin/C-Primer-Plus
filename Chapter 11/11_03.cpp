#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	double max = 0;
	double min = 0;
	double sum = 0;
	size_t attempts;
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";		
		if (!(cin >> dstep))
			break;
		cout << "Enter number of attempts: ";
		if (!(cin >> attempts))
			break;
		for (size_t i = 0; i < attempts; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			sum += steps;
			if (min > steps || min == 0)
				min = steps;
			if (max < steps)
				max = steps;
			steps = 0;
			result.reset(0.0, 0.0);
		}
		cout << "Max = " << max << ", Min = " << min << ", Average = " << sum / static_cast<double> (attempts + 1);
		cout << "\nEnter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}
