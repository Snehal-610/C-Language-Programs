//Write a program to enter a five elements using Array and print it on a screen
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[5];
	printf("Enter Elements of array :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<5;i++)
		{	
			printf("array elecemnt is : %d\n",arr[i]);
		}
}
