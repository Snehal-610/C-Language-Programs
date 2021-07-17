//Write a Program to show swap of two No's without using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10, b=5;
	printf("Before swapping number a=%d b=%d",a,b);
	a=a+b;	//a=15
	b=a-b;	//b=10
	a=a-b;	//a=5 
	
	printf("\nAfter swapping number a=%d b=%d",a,b);
}
