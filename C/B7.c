//Write a program to convert temperature from degree centigrade to Fahrenheit.
//formula = (celsius*1.8)+32
#include<stdio.h>
#include<conio.h>
void main()
{
	int celsius;
	float Fahrenheit;
	printf("Enter temprature in celsius:");
	scanf("%d",&celsius);
	Fahrenheit = (celsius*1.8)+32;
	printf("\nTemprature in Fahrenheit:%f",Fahrenheit);
}
