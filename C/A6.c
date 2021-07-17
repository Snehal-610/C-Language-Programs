//Write a program to print the Matrix using 2-D Array
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[2][2];
	printf("Enter Array Elements: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		printf("[");
		for(j=0;j<2;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("]\n");
	}
}
