//Write a Program to check the given number is prime or not prime
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("<-- Enter a Number for checking -->\n");
	scanf("%d",&a);
	if(a>2 && a%2 == 0)
	{
		printf("This number is Prime number");
	}
	else
	{
		printf("This number is not Prime number");
	}
}
