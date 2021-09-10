#include <iostream>
using namespace std;


void Var(int a, int b)
{
	
	int z;
	z = a%b +1;
	if (z == 1)
	    cout<< "Your variant is first" << endl;
	else
	    cout<< "Your variant is second" << endl;
	
	
}

int main()
{
	int a=0;
	while(getchar() != '\n'){
		 ++a;
		}
	Var(a,2);
	return 0;
}
