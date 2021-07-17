//Write a program to print the number in reverse order
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0;
	printf("Enter number for reverse order:");
	scanf("%d",&n);
	while (n != 0)
  	{
    rev = rev * 10;		
    rev = rev + n%10;
    n = n/10;
  }
  printf("Reverse of the number = %d\n", rev);	
}
