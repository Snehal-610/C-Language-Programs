//Write a program to find out the max number from given 10 elements of array.
#include<stdio.h>
#include<conio.h>
void main()
{	
	int i;
	int k = 0;
	printf("Enter Array :\n");
	for(i=0;i<10;i++)
	{
		int a[i];
		scanf("%d",&a[i]);
		printf("Array element is : %d\n",a[i]);
		if(k<a[i])
		{
			k=a[i];
		}
	}
		printf("Max vale is : %d\n",k);
}
