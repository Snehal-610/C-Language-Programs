//Write a program to swap the two numbers using friend function (Not Use of third variable)
#include<iostream>
using namespace std;
class temp 
{
 	int a, b;
 	public:
	void input() 
	{
	 cout<<"Enter a:";
	 cin>>a;
	 cout<<"Enter b:";	
	 cin>>b;
	}
	void display() 
	{
	 cout<<"After Swap a is :"<<a<<endl;
	 cout<<"After Swap b is :"<<b<<endl;
	}
	friend void swap(temp &t);
};
void swap(temp &t) 
{
    t.a = t.a+t.b;
    t.b = t.a-t.b;
    t.a = t.a-t.b;
}
int main() 
{
    temp t1;
    t1.input();
    swap(t1);
    t1.display();
    return 0;
}
