//Write a program make a summation of first and last number
#include<stdio.h>
#include<conio.h>    
void main()
	{
    int n, s1, s2,z;
    printf(" How many Digit numbers : ");
    scanf("%d", &n);
    if(n>0)
		{
        	printf("\n Enter the First Digit : ");
            scanf("%d", &s1);
            n--;
            if(n>0)
			{
            for(;n>=1; n--)
			{
            printf("\n Enter the next Digit : ");
            scanf("%d", &s2);
            
            }
            s1 = s1+s2;
        }
    }
    printf("\n The SUm of digit numbers is %d", s1);
}
