//Write a program to find out the second smallest value from array
#include<stdio.h>
#include<conio.h>
void main()
{	
	int i,small,s_small;
	int a[100];
	printf("Enter Array :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		printf("Array element is : %d\n",a[i]);
		if(a[0]<a[1])
		{
			small = a[0];
			s_small = a[1];
		}
		else{
			small = a[1];
			s_small = a[0];
		}
	}
	for(i=2;i<10;i++)
	{
		if(small>a[i])
		{
			s_small = small;
			small = a[i];
		}
		else if(s_small>a[i])
		{
			s_small = a[i];
		}
	}
		printf("Second Smallest vale is : %d\n",s_small);
	}

