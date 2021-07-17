//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
#include<iostream>
using namespace std;
int area(int length,int width)
{
    return (length*width);
}

float area(float radius)
{
    return (3.14*radius*radius);
}

float area(float base,float height)
{
    return ((base*height)/2);
}

int main(){
    int len,wid;
    float rad,bs,ht;
    cout<<"Enter length and breath of width of rectangle : \n";
    cin>>len>>wid;
    cout<<"Enter redius of circle : \n";
    cin>>rad;
    cout<<"Enter base and height of triangle : \n";
    cin>>bs>>ht;
    cout<<"\nArea of Rectangle is : "<<area(len,wid);
    cout<<"\nArea of Cricle is : "<<area(rad);
    cout<<"\nArea of Triangle is : "<<area(bs,ht);
//    getch();
	return 0;
}

