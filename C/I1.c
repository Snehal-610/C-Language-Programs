//I1.Write a Program to check the given year is leap year or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter year ::");
	scanf("%d",&year);
	if(year%4==0 && year%100==0 && year%400==0)
	{
		printf("Yeah! Entered year is leap year");
	}
	else if(year%4==0 && year%100!=0)
	{
		printf("Yeah! Enter yeared is leap year");
	}
	else if(year%4==0 && year%100==0 && year%400!=0)
	{
		printf("Oops! Entered year is not leap year");
	}
	else if(year%4!=0)
		{
		printf("Oops! Entered year is not leap year");
	}
}
