//Write a program to sort the numbers using pointer and functions
#include<stdio.h>
#include<conio.h>
void sort(int n,int *ptr)
{
	int i,j,k=0;
	

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr + j) < *(ptr + i))
			{
				k = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = k;
			}
		}
	}
		for(i=0;i<n;i++)
		{
			printf("arranged array is : %d\n",*(ptr + i));
		}
	}
	
	
void main()
{
	int i,n=5,a[50];
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(n,a);
}
