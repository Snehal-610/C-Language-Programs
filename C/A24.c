//Print a number and check the number is palindrome or not using recursive Function
#include<stdio.h>
#include<conio.h>
int reverse(int num);
void main()
{
	int num1;
	printf("\nEnter a number = ");
	scanf("%d",&num1);

	if(palindrome(num1) == 0)
	{
	printf("number is Palidrome");
	}
	else
	{
	printf("number is not Palidrome");
	}
}
int reverse(int num)
{
	int	rev =0;
	while(num!=0)
	{
		rev = rev*10 + num%10;
		num = num/10;
	}
	return rev;
}
int palindrome(int num)
{
	if(reverse(num) == num)
		return 0;
	else
		return 1;
}

