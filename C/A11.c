//Write a program to convert the string from uppercase to lowercase and vice versa
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10];
	printf("Enter your name : ");
	scanf("%s",&a);
	strupr(a);
	printf("Your name in UPPER CASE : %s\n",a);
	strlwr(a);
	printf("Your name in lower case : %s",a);
	
}
