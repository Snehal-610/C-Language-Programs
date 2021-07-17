//student having rollno and marks of three subjects of five students.
//print all the information and total marks and percentage of each student
#include<stdio.h>
#include<conio.h>
struct Student{
	int Rno;
	char name[35];
	int O_marks;
	float perc;
	int i,maths,eng,sci ;
};
struct Student details[100];
void main()
{
	int i,T_sub = 3;
	printf("Enter Students's Information : \n");
	
	for(i=1;i<6;i++)
	{	
	printf("Roll number | Name | English | Maths | Science : \n");
	scanf("%d %s %d %d %d",&details[i].Rno,&details[i].name,&details[i].eng,&details[i].maths,&details[i].sci);
	details[i].O_marks = details[i].eng + details[i].maths + details[i].sci;
	printf("Obtained marks is  : %d\n",details[i].O_marks);
	details[i].perc = (float)details[i].O_marks/T_sub;
	printf("percentage of %d Number is : %f\n",details[i].Rno,details[i].perc);
	}
}
