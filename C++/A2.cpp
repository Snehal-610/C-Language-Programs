//Addition, Subtraction, Multiplication, and Division of two numbers using Class//
#include<iostream>
using namespace std;

class operation
{
	public:
		float a,b,result;
		int select;
		float setData();
		float calculation();
		
};
float operation :: setData()
{
	cout<<"---------------------\nWelcome to Calculator\n---------------------"<<endl;
	cout<<"You Can Start With Entering Two Numbers"<<endl;
	cout<<"Enter First Number"<<endl;
	cin>>a;
	cout<<"Enter Second Number"<<endl;
	cin>>b;
}
float operation :: calculation()
{
	setData();
	cout<<"Which operation you want to perfom\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n";
	cin>>select;
	switch(select)
	{
		case 1:
			result = a+b;
			cout<<result;
			break;
		case 2:
			result = a-b;
			cout<<result;
			break;
		case 3:
			result = a*b;
			cout<<result;
			break;
		case 4:
			result = a/b;
			cout<<result;
			break;
}
}
int main()
{
	operation op;
	op.calculation();
	return 0;
}

