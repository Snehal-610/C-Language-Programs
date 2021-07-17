#include<stdio.h>
#include<conio.h>
#define PIE 3.14
float add(float area)
{
	float radius;
	printf("Enter radius of circle:\n");
	scanf("%f",&radius);
	area = PIE*radius*radius;
	return area;

	
}
