#include <iostream>

template <typename T>
T max5(T t[5]);

int main(void)
{
	int iArray[5] = { 2, 5, 42, 6, 100 };
	double fArray[5] = { 43.0, 56.0, 124.0, 500.1, 500.0 };
	std::cout << "int max5: " << max5(iArray) << " double max5: " << max5(fArray) << std::endl;

	return 0;
}
template <typename T>
T max5(T t[5])
{
	T max = t[0];
	for (size_t i = 1; i < 5; i++)
		if (t[i] > max)
			max = t[i];
	return max;
}
