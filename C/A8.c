//Write a program of two make Subtraction of two matrix using 2-D Array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[2][2] = {{2,2},{13,10}};
	int m,k,b[2][2] = {{4,6},{7,8}};
	int sum[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j] = a[i][j] - b[i][j];
			printf("Subtracted array[%d][%d] is :%d\n",i,j,sum[i][j]);
		}
	}
}
