//Write a program to read data from file.
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char c;
	printf("\n\n\n-----FILE IS OPENING-----\n\n\n");
	f1 =fopen("data.txt","r");
	while((c=getc(f1))!=EOF)
	{
		printf("%c",c);
	}
	fclose(f1);
}

