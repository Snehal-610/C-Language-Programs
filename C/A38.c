//Write a program to swap the values of 2 variable using pointer, function and structure.
#include<stdio.h>
#include<conio.h>
struct swap{
	int n1;
	int n2;
	int temp;
};
void swap(int *a,int *b);
void main()
{
	struct swap num;
	printf("Enter the Value of n1 : \n");
	scanf("%d",&num.n1);
	printf("Enter the Value of n2 : \n");
	scanf("%d",&num.n2);
	printf("\nValue of n1 = %d and n2 = %d is before swap\n",num.n1,num.n2);
	swap(&num.n1,&num.n2);
	printf("\nValue of n1 = %d and n2 = %d is after swap\n",num.n1,num.n2);


	
}
void swap(int *a,int *b)
{
	struct swap num;
	num.temp = *a;
	*a = *b;
	*b = num.temp;
}
