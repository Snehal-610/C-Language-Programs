//copy string from one string to another string without using string function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i;
	char name[10],cop[10];
	gets(name);
	printf("Your string name is : ");
	puts(name);
	for(i=0;name[i]!=0;i++)
	{
	cop[i] = name[i];
	}
	printf("your copy string is :");
	puts(cop);
}
