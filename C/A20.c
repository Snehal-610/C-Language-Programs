//Fibonacci series using function
#include<stdio.h>
#include<conio.h>
void series();
void main()
{
	series();
}
void series()
{

	int i=0,j=0,fibo,number;
	printf("Please enter the number for find series:");
	scanf("%d",&number);
	
	printf("fibonacci series: ");
	for(i=0; i<=number ;i++)	//i=0/0<8/i++
	{
		printf(" %d",i);	  //0,1,1,2,3,5,8,13,................we are hear
		fibo = i+j;			 //fibo =0,1,2,4,7,12,20, ...........
		i=j;				// i =0,0,1,2,4,7,12,............
		j=fibo;            // j =0,1,2,4,7,12,20..............
}
}
