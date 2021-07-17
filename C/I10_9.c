#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m;
	m=1;
for(i=1;i<=5;i++)
{
	for(j=5;j>m;j--)
	{
		printf(" ");
	}
	m++;
	for(k=1;k<i;k++)
	{
		printf("%d ",i);
	}
	printf("%d\n",i);
	}
}
