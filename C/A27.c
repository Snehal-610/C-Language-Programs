//Write a program of structure for five employee that provides the following information
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
	int i;
	struct employee emp[50];
	for(i=0;i<5;i++)
	{
	printf("Enter Employee Name :");
	scanf("%s",&emp[i].name);
	printf("Enter emp[i]loyee ID :");
	scanf("%d",&emp[i].emID);
	printf("Enter employee Salary :");
	scanf("%f",&emp[i].slry);
	}
	printf("\n-----Enter deatails are as below-----\n");
	for(i=0;i<5;i++)
	{
	printf("\nEmployee Name is : %s",emp[i].name);
	printf("\nEmployee ID is : %d",emp[i].emID);
	printf("\nEmployee Salary is : %.2f",emp[i].slry);
	}
}
