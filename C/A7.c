//Write a program of two make Addition of two matrix using 2-D Array
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[2][2] = {{1,2},{3,4}};
	int m,k,b[2][2] = {{5,6},{7,8}};
	int sum[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("Added array[%d][%d] is :%d\n",i,j,sum[i][j]);
		}
	}
}
