#include<stdio.h>
#include<conio.h>
void Max_num();
void main()
{
	printf("Enter Array elements:\n");
	Max_num();
}
void Max_num()
{	
int i,j,a[3][3];
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>a[0][0])
			{
			a[0][0] = a[i][j];
			}
		}
	}
	printf("Max Number is: %d",a[0][0]);
}
