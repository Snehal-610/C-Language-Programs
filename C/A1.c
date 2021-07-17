//Write a program to enter a ten elements using Array and make a summation of the numbers and average of summation
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k = 0,arr[9];
	float av,sum;
	printf("Enter Array :\n");
	for(i=0;i<=9;i++)
	{	
		scanf("%d",&arr[i]);
		printf("Array element is : %d\n",arr[i]);
		sum = k + arr[i];
		k = sum;
//		printf("k is : %d\n", k);
	}
		printf("Array length is : %d \n",i);
		av = (sum/i);
		printf("Addition is :%0.3f\n",sum);
		printf("Average is :%0.3f\n",av);
}
