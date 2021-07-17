//Write a program to append data into already existed file.
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char c[50],c2;
	f1 = fopen("data.txt","a");
	if(f1 == NULL)
	{
		printf("Issue! File can not be opened. . .");
	}
	printf("Enter Your new Addes DATA : : : :");
	gets(c);
	fputs(c,f1);
	fclose(f1);
	
	printf("Your whole file information is:\n");
	f1 = fopen("data.txt","r");
	while((c2=getc(f1))!=EOF)
	{
		printf("%c",c2);
	}
	fclose(f1);


}
