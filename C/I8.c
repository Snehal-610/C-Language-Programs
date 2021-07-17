/*Write a program of to find out the Area of Triangle, Rectangle and Circle using If Condition
area of triangle = (hieght*base)/2
area of rectangle = length*width
area of circle = pie*r*r	*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Please Enter method number:");
	scanf("%d",&a);
	if(a == 1)
	{
	float base,height,area;
	printf("\nEnter Base value of triangle:");
	scanf("%f",&base);
	printf("\nEnter Height value of triangle:");
	scanf("%f",&height);
	area = (base*height)/2;
	printf("\narea of triangle is:%f",area);
	}
	else if(a == 3)
	{
	float area,r,pie;
	pie = 3.14159;
	printf("Enter radius of circle:\n");
	scanf("%f",&r);
	area = pie*r*r;
	printf("Area of Circle is:%f",area);
	}
	else if(a == 2)
	{
	float length, width, area;
	printf("Please enter length of rectangle:");
	scanf("%f",&length);
	printf("Please enter width of rectangle:");
	scanf("%f",&width);
	area = length * width;
	printf("Area of rectangle is:%f",area);
	}
	else
	{
		printf("please select supported method for our program");
	}
}
