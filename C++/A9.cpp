//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class calculator{
	int a,b,arithmatic,choice;
	public:
		calculator(int c,int d)
		{
			a = c;
			b = d;			
			cout<<"Please Enter Your choice"<<endl;
			cin>>choice;
			switch(choice)
			{
			case 1:
			arithmatic = a+b;
			cout<<"The Adition is = "<<arithmatic<<endl;
			break;
		
			case 2:
			arithmatic =  a-b;
			cout<<"The Subtraction is = "<<arithmatic<<endl;	
			break;
		
			case 3:
			arithmatic =  a*b;
			cout<<"The Multiplication is = "<<arithmatic<<endl;
			break;
		
			case 4:
			arithmatic =  a/b;
			cout<<"The Division is = "<<arithmatic<<endl;
			break;
			
			default:
			cout<<"Wrong Choice";
		}
	}		
};
int main()
{
	int num1,num2;
	cout<<"Please Eneter Two numbers : "<<endl;
	cin>>num1>>num2;
	calculator c1(num1,num2);
	return 0;
}
