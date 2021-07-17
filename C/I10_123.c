#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%d",j);
		}
		printf("%d\n",i);
	}
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%d",i);
		}
		printf("%d\n",i);
	}
	
	for(k=1;k<=5;k++)
	{
		for(m=1;m<k;m++)
		{	
		printf("*");
		}	
	printf("*\n");
	}
}
