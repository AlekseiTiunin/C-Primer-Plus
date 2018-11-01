#include <iostream>
#include <cstring>

struct chaff
{
	char dross[20];
	int slag;
};

char Buffer[200];

int main()
{
	chaff * ptr = new (Buffer) chaff[2];
	strcpy(ptr->dross, "foo");
	ptr->slag = 100;
	strcpy((ptr+1)->dross, "bar");
	(ptr + 1)->slag = 200;
	for (size_t i = 0; i < 2; i++)
		std::cout << "dross: " << ptr[i].dross << " slag: " << ptr[i].slag << std::endl;

	return 0;
}
