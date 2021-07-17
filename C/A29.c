//Write program to make a addition of two number using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int *ptra = &a;
	int	*ptrb = &b;
	int *sum = &c;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	printf("Value of a & b is :%d %d\n",*ptra,*ptrb);
	*sum = *ptra + *ptrb;
	printf("Addition is : %d\n",*sum);	
}
