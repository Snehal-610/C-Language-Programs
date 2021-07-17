//progra1m to print the string in reverse order using function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char temp,s1[100];
	printf("Enter your name : ");
	scanf("%s",&s1);
	strrev(s1);
	printf("Reversed string is : %s\n",s1);
}
