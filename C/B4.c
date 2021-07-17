//Write a program to find the Area of Circle
//formula = pie*r*r
#include<stdio.h>
#include<conio.h>
void main()
{
	float area,r,pie;
	pie = 3.14159;
	printf("Enter radius of circle:\n");
	scanf("%f",&r);
	area = pie*r*r;
	printf("Area of Circle is:%f",area);
}
