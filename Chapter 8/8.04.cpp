#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
	char *str;
	int ct;
};

void set(stringy & stringyStr, char * str);
void show(const stringy str, int N = 1);
void show(const char *, int N = 1);

int main(void)
{
	stringy beany = { nullptr, 0 };
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	delete[] beany.str;
	return 0;
}

void set(stringy & stringyStr, char * str)
{
	if (stringyStr.str != nullptr)
		delete[] str;
	stringyStr.ct = strlen(str);
	stringyStr.str = new char[stringyStr.ct + 1];
	strcpy(stringyStr.str, str);	
}
void show(const stringy string, int N)
{
	for (int i = 0; i < N; i++)
		std::cout << string.str << std::endl;
}
void show(const char * str, int N)
{
	for (int i = 0; i < N; i++)
		std::cout << str << std::endl;
}
