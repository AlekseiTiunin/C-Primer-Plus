#include <iostream>
#include "plorg.h"
int main()
{
	using std::cout;
	using std::endl;
	Plorg One;
	Plorg Two = { "Grut." };
	cout << "Default Plorg:";
	One.Show();
	cout << endl;
	cout << "Custom Plorg:";
	Two.Show();
	cout << endl;
	cout << "Custom is sad, Default is happy:\n";
	One.AddCI(20);
	Two.SubCI(20);
	cout << "Default Plorg:";
	One.Show();
	cout << endl;
	cout << "Custom Plorg:";
	Two.Show();
	cout << endl;
}
