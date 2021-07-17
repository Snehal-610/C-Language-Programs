//Write a Program of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	char operation;
	printf("Enter your choice from A,S,M,D\n");
	scanf("%c",&operation);
	switch(operation)
	{	
	case 'a':
		printf("enter value of a and b:");
		scanf("%d%d",&a,&b);
		c = a + b;
		printf("Addition is:%d",c);
		break;
	case 's':
		printf("enter value of a and b:");
		scanf("%d%d",&a,&b);
		c = a - b;
		printf("Subtraction is:%d",c);
		break;
	case 'd':
		printf("enter value of a and b:");
		scanf("%d%d",&a,&b);
		c = a / b;
		printf("Division is:%d",c);
		break;
	case 'm':
		printf("enter value of a and b:");
		scanf("%d%d",&a,&b);
		c = a * b;
		printf("Multiplication is:%d",c);
		break;
	default:
		printf("this calculation is not supported");	
	}
}
