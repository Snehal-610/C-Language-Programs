//Write a program to make addition, Subtraction, Multiplication and Division of Two Numbers.

#include<stdio.h>
#include<conio.h>	
void main()
{
float a,b,c,d;
printf("Enter value of a ");
scanf("%f",&a);

printf("Enter value of b ");
scanf("%f",&b);

c = a + b;
printf("the Addition is %.02f\n", c);

d = a - b;
printf("the Substraction is %.0f\n", d);

d = a * b;
printf("the Multiplication is %.0f\n", d);
c = a / b;
printf("the Dvision is %f", c);

}

