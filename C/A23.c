//Write a Program of Factorial using Recursive Function
#include<stdio.h>
#include<conio.h>
int fact(int number);
void main()
{
	int result,b;
	printf("Enter number for finding factorial : ");
	scanf("%d",&b);
	result = fact(b);
	printf("Factorial of Number %d is : %d",b,fact(b));
}
int fact(int number)
{
	{
	if(number == 1 && number ==0)
	return 1;
	}
	if(number>1)
	{
	return number * fact(number - 1);
	}
}
