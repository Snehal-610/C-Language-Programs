#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,m;
	m=1;
for(i=1;i<=5;i++)
{
	for(j=1;j<=m;j++)
	{
		printf(" ");
	}
	m++;
	for(k=5;k>=i;k--)
	{
	printf("* ");
	}
	printf("\n");
	}

}
