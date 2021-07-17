//addition, subtraction, multiplication and division using function
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter First number: ");
	scanf("%d",&n1);
	printf("\nEnter Second Number: ");
	scanf("%d",&n2);
	printf("Addition of %d & %d is : %d\n",n1,n2,Add(n1,n2));
	printf("Multiplication of %d & %d is : %d\n",n1,n2,Mul(n1,n2));
	printf("Division of %d & %d is : %d\n",n1,n2,Div(n1,n2));
	printf("Subtraction of %d & %d is : %d\n",n1,n2,Sub(n1,n2));
	
}
int Add(int a, int b)
{
	int result;
	result = a + b;
//	return result;
}
int Mul(int a, int b)
{
	int result;
	result = a * b;
	return result;
}
int Div(int a, int b)
{
	int result;
	result = a / b;
	return result;
}
int Sub(int a, int b)
{
	int result;
	result = a - b;
	return result;
}
