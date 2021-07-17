//write a program you have to find the factorial of given number.
//factorial example of 5 = 1*2*3*4*5
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fact,number;
	fact=1;
	printf("Enter the Number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		fact = fact*i;
	}
	printf("The factorial of number %d is:%d", number,fact);	
}
