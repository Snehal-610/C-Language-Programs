//Write a program to read and write data from the file
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char c[50],c2;
	f1 = fopen("data.txt","w");
	if(f1 == NULL)
	{
		printf("Issue! File can not be opened. . .");
	}
	printf("Enter Your DATA : : : :");
	gets(c);
	fputs(c,f1);
	fclose(f1);
	printf("Your file information is:\n");
	f1 = fopen("data.txt","r");
	while((c2=getc(f1))!=EOF)
	{
		printf("%c",c2);
	}
	fclose(f1);


}
