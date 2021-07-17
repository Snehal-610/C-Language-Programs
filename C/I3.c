//Write a program to find the Max number from the given three number using Nested If
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("First number a:%d, Second Number:%d, Third Number:%d \n",a,b,c);
	if(a<b)
	{
		if(c<b)
		{
			printf("Second number b is max number : %d",b);
		}
		else
		printf("Third number c is max number : %d",c);
	}
	else if(a<c)
	{
		printf("Third number c is max number : %d",c);
	}
	else
	{
		printf("First number a is max number : %d",a);
	}
}
