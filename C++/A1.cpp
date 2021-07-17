//Fibonacci and factorial using Class
#include<iostream>
using namespace std;

class series
{
	private:
		int n;
	public:
		int i,j=0,k=0,temp;
		
int factorial(int n)
{
	if(n==1 || n==0)
	return 1;
	else if(n>1)
	return n * factorial(n - 1);
}
int fibo();
};
int series :: fibo()
{
	cout<<"Enter Number to Find fibonacci series "<<endl;
	cin>>i;
	cout<<"fibonacci Of Number is ";
	for(j=0;j<i;j++)		
	{
		cout<<" "<<j<<" ";	
		temp = j+k;		
		j = k;			
		k = temp;				
	}		
}
int main()
{
	series fact;
	series fibo;
	int a;
	cout<<"Enter Number to Find Factorial "<<endl;
	cin>>a;
	cout<<"Factorial Of Number "<<a<<" is "<<fact.factorial(a)<<endl;
	fibo.fibo();
	
	return 0;
}
