//Write a program to enter a ten elements using Array and find out the to count the total number of odd and even numbers
#include<stdio.h>
#include<conio.h>
void main()
{
int i,odd=0,even=0,arr[10];
printf("Enter Array Elements : ");
for(i=0;i<=9;i++)
{
	scanf("%d",&arr[i]);
}
for(i=0;i<=9;i++)
{
	printf("Elements of array is : %d\n",arr[i]);
}
for(i=0;i<=9;i++)
{
if(arr[i]%2==0)
even++;
else
odd++;
}
printf("odd count :%d\n",odd);
printf("even count :%d\n",even);
}

