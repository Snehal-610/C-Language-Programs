//Write a program to concatenate the stow string using pointer.
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100], b[100];

    printf("\nEnter the first string: ");
    gets(a);  

    printf("\nEnter the second string : ");
    gets(b);  
    char *ptra = a;
    char *ptrb = b;

    while(*ptra)
	    {
        ptra++;   
		}
    while(*ptrb)  
    {
        *ptra = *ptrb;
        ptrb++;
        ptra++;
    }
    *ptra = '\0'; 
    
    printf("\nThe string after concatenation is: %s ", a);
    }

