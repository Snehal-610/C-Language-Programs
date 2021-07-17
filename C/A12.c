//Write a program to find out the length of given string without using string function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,len=0;
	char name[] = "abcs";
	printf("Enter String is :%s",name);
	for(i=0;name[i]!=0;i++)
	{
		len++;
	}
	printf("\nLength Of string is : %d",len);
}

