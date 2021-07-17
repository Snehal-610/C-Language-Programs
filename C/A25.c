//Write a Program of Make a string reverse using recursive Function.
#include<stdio.h>
#include<conio.h>
#include<string.h>
char reverse(char str[50]);
void main()
{
	char str1[40];
	reverse(str1);
}
char reverse(char str[20])
{
	printf("Enter your string : ");
	gets(str);
	strrev(str);
	printf("\nReversed string is : ");
	puts(str);
}

