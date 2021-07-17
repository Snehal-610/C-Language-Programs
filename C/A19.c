//factorial of given number using function
#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int a;
	printf("\nEnter number for find factorial : ");
	scanf("%d",&a);
	printf("Factorial of given number %d is : %d ",a,fact(a));
	
}
int fact(int n)
{
	int i,f;
	f=1;
	for(i=1;i<=n;i++)
	{
	f = f*i;
	}
	return f;
}
