//Write a program to swap the two numbers using friend function
#include<iostream>
using namespace std;
class temp 
{
 	int a, b, tem;
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
    t.tem = t.a;
    t.a = t.b;
    t.b = t.tem;
}
int main() 
{
    temp t1;
    t1.input();
    swap(t1);
    t1.display();
    return 0;
}
