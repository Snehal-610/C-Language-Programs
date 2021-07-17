//Write a program to swap the two numbers without using third variable using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 15,b = 10;
	int *ptra = &a;
	int	*ptrb = &b;
	printf("Value of a & b before swap is :%d %d\n",*ptra,*ptrb);
	*ptra = *ptra + *ptrb;
	*ptrb = *ptra - *ptrb;
	*ptra = *ptra - *ptrb;
	printf("Value of a & b after swap is :%d %d\n",*ptra,*ptrb);
}
