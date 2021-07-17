/*Write a program to find the simple Interest.
 formula = (P*R*T)/100
 where P= Principle amount R = Rate of Interest , T = Total years	*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int P,R,T,interest;
	printf("Enter total amount:");
	scanf("%d",&P);
	printf("Enter Rate of interest:");
	scanf("%d",&R);
	printf("Enter total year:");
	scanf("%d",&T);
	interest = (P*R*T)/100;
	printf("Total amount of interest is: %d",interest);
	}
