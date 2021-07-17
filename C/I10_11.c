#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k%2);
			k++;
		}
		printf("\n");
	if(i%2==0)
	 	k = 1;	
	 else
	 	k = 0;
	 }
}
