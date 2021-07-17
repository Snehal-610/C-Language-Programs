#include <iostream>
using namespace std;
int main ()
{
	int* p = NULL;
	p = new(nothrow) int;
	if (!p)
		cout<<"allocation of memory failed\n";
	else
	{
		*p = 29;
		cout<<"Value of p: "<<*p<<endl;
	}
	delete p;
	return 0;
}

