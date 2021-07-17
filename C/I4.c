//Write a program to find the Max number from the given three number using Ternary Operator
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max;
	printf("Enter First numbers a:");	
	scanf("%d",&a);
	printf("Enter Second numbers b:");
	scanf("%d",&b);
	printf("Enter Third numbers c:");
	scanf("%d",&c);
	max = (a>b)?printf("\nA is max") : (b>c)?printf("\nB is max") : printf("\nC is max");
}
