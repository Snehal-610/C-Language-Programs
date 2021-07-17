//Write a program of structure for employee that provides the following information
//-print and display empno,empname,address and age
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char name[20];
	int emID;
	float slry;
};
void main()
{
	struct employee emp;
	printf("\nEnter Employee Name :");
	scanf("%s",&emp.name);
	printf("\nEnter Employee ID :");
	scanf("%d",&emp.emID);
	printf("\nEnter Employee Salary :");
	scanf("%f",&emp.slry);
	printf("\n-----Enter deatails are as below-----\n");
	printf("\nEmployee Name is : %s",emp.name);
	printf("\nEmployee ID is : %d",emp.emID);
	printf("\nEmployee Salary is : %.2f",emp.slry);
	return 0;
}
