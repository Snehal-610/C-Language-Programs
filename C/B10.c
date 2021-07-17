//Write a Program to check the given number is Positive, Negative.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter Number for check\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Number A is positive\n");
	}
		else if(a<0)
		{
		printf("Number A is Negative");
		}
		else
		{
		printf("You entered Zero");
		}
}

