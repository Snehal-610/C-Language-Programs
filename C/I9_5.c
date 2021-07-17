/*Write a program you have to print the Fibonacci series up to user given number
/*example of fibonacci series of 20 = 0,1,2,3,5,8,13
f3 = f1+f2
f4 = f2+f3
. .. . .. .. f111 = f109 +f110	 
logic change the value f1 = f2 & f2 = f3 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0,fibo,number;
	printf("Please enter the number for find series:");
	scanf("%d",&number);	
	printf("fibonacci series: ");
	for(i=0; i<=number ;i++)
	{
		printf(" %d",i);
		fibo = i+j;
		i=j;
		j=fibo;
}	
}
