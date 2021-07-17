//count the total number of word from given string without using string function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,len;
	char name[10];
	printf("Enter String is :%s",name);
	gets(name);
	for(i=0;name[i]!=0;i++)
	{
		if(name[i] == ' ' || name[i] == '\n' || name[i] == '\t')
		{
		  len++;
		}
	}
	printf("\nLength Of string word is : %d",len);
}

