//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
//Circle: Pi * Area * Area; Rectangle: Area * Width Triangle: ½ *Area* Base
#include<iostream>
using namespace std;
int area(int length ,int width)
{
    return (length *width);
}
int area(int radius)
{
    return (3.14*radius*radius);
}
int area(int base,int height )
{
    return ((base*height )/2);
}
int main()
{
    int length ,wid;
    int rad,base,height;
    cout<<"Enter length and Width of rectangle : \n";
    cin>>length>>wid;
    cout<<"Enter redius of circle : \n";
    cin>>rad;
    cout<<"Enter base and height of triangle : \n";
    cin>>base>>height ;
    cout<<"\nArea of Rectangle is : "<<area(length ,wid);
    cout<<"\nArea of Cricle is : "<<area(rad);
    cout<<"\nArea of Triangle is : "<<area(base,height );
    return 0;
}

