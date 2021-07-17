//Write a program to find out the Max number from given Matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,a[2][2];
	printf("Enter Array Elements: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	k = a[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		if(a[i][j]>k)
		{
			k = a[i][j];
		}
		}
	}
	printf("max value is - %d",k);
}
