//Write a program to calculate sum of 5 subjects & find the percentage. Subject marks entered by user.
#include<stdio.h>
#include<conio.h>
void main()
{
	int maths, sci, eng, guj, comp,total;
	float perc;
	printf("Enter five Subjects marks out of hundred:");
	scanf("%d%d%d%d%d",&maths,&sci,&eng,&guj,&comp);
	printf("\nMaths=%d Scieence=%d English=%d Gujrati=%d Computer=%d",maths,sci,eng,guj,comp);

	total = 500;
	perc = ((maths+sci+eng+guj+comp)*100)/total;
	printf("\nObtained Percentage of Student is:%.2f",perc);
	
}
