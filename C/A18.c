//Square and cube using function
#include<stdio.h>
#include<conio.h>
void main()
{
	square();
	printf("\nCube of number is : %d",Cube());
}
int square()
{
	int n1,sqr;
	printf("\nEnter Number : ");
	scanf("%d",&n1);
	sqr = n1*n1;
	printf("\nSquare of %d is : %d",n1,sqr);
}
int Cube()
{
	int n1,cube;
	printf("\nEnter Number : ");
	scanf("%d",&n1);
	cube = n1*n1*n1;
	return cube;
}

