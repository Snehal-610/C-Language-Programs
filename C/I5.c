/*I5.Write a program user enter the 5 subjects mark. You have to make a total and find the percentage.
Percentage > 75 you have to print “Distinction”
Percentage > 60 and percentage <= 75 you have to print “First class”
Percentage >50 and percentage <= 60 you have to print “Second class” 
Percentage > 35 and percentage <= 50 you have to print “Pass class” Otherwise print “Fail”*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int maths, sci, eng, guj, comp,total;
	float perc;
	printf("Enter five Subjects marks out of hundred:");
	scanf("%d%d%d%d%d",&maths,&sci,&eng,&guj,&comp);
	printf("\nMaths=%d Scieence=%d English=%d Gujrati=%d Computer=%d\n",maths,sci,eng,guj,comp);

	total = 500;
	perc = ((maths+sci+eng+guj+comp)*100)/total;
	printf("percentage:%f\n",perc);
	if(perc>75)
	{
		printf("Distinction");
	}
	else if(60<perc && perc<=75)
	{
		printf("First Class");
	}
	else if(50<perc && perc<=60)
	{
		printf("Second Class");
	}
	else if(35<perc && perc<=50)
	{
		printf("Pass Class");
	}
	else
	{
		printf("fail");
	}
}
