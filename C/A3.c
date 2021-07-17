//Write a program to sort the array of 5 elements
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=0,a[50];
	printf("Enter Array Elements :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
		for(i=0;i<10;i++)
		{
			printf("arranged array is : %d\n",a[i]);
		}
	}
