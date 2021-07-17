//Write a program you have to print the table of given number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,tab,num;
	printf("Enter number for table:");
	scanf("%d",&num);
	printf("\nTable of %d is:",num);
	for(i=1;i<=10;i++)
	{
		tab = i*num;
		printf("\n %d*%d=%d", i,num,tab);	
	}
}
