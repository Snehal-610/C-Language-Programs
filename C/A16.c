//Write a program co concatenate the two string without using string function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j=0;
	char s1[10],s2[10],s3[200];
	printf("Enter Two Strings\n");
	gets(s1);
	gets(s2);
	printf("Two strings are %s and %s\n",s1,s2);
	for(i=0;s1[i]!=0;i++)
	{			
	s3[j] = s1[i];
	j++;
	}
	for(i=0;s2[i]!=0;i++)
	{
	s3[j] = s2[i];
	j++;
	}	
	s3[j] = '\0';
	printf("concatenated string is :");
	puts(s3);
}
