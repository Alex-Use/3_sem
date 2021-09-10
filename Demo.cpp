#include <iostream>
using namespace std;

void Var(int a, int b)
{
	int z = a%b + 1;
	if (z == 1)
	{
		cout << "Your variant is first" << endl;
	}
	else
	{
		cout << "Your variant is second" << endl;
	}
	}


int main()
{
	Var(16,2);

	return 0;
}
