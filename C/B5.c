//Write a program to find the Area of Triangle
//formula = (base*height)/2
#include<stdio.h>
#include<conio.h>
void main()
{
	float base,height,area;
	printf("\nEnter Base value of triangle:");
	scanf("%f",&base);
	printf("\nEnter Height value of triangle:");
	scanf("%f",&height);
	area = (base*height)/2;
	printf("\narea of triangle is:%f",area);
}
