#include <iostream>

template <typename T>
T maxn(T const tArray[], int iN);
template<> char * maxn(char * const tArray[], int iN);


int main(void)
{
	int iArray[6] = { 2, 5, 42, 6, 100, 200 };
	double fArray[4] = { 43.0, 56.0, 124.0, 500.1 };
	char sArray[5][15] = { "String1", "String22", "String333", "String4444", "Stirng55555" };
	char * sPtr[5] = { sArray[0], sArray[1], sArray[2], sArray[3], sArray[4] };
	std::cout << "int[6] maxn = " << maxn(iArray, 6) << ", double[4] maxn = " << maxn(fArray, 4)
		<< ", char * [5] maxn = " << maxn(sPtr, 5) << std::endl;
	return 0;
}

template <typename T>
T maxn(const T tArray[], int iN)
{
	T max = tArray[0];
	for (int i = 0; i < iN; i++)
		if (tArray[i] > max)
			max = tArray[i];
	return max;
}

template<> char * maxn(char * const tArray[], int iN)
{
	char * max = tArray[0];
	for (int i = 0; i < iN; i++)
		if (strlen(tArray[i]) > strlen(max))
			max = tArray[i];
	return max;
}
