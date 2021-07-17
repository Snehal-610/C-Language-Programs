#include<iostream>
using namespace std;
int main()
{
	int size,i;
	int *ptr;
	cout<<"\nEnter the size of array: ";
	cin>>size;
	ptr = new int[size];
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter any number: ";
		cin>>ptr[i];
	}
	for(i=0;i<size;i++)
		cout<<ptr[i]<<"\n";
	delete[] ptr;
	return 0;
}
