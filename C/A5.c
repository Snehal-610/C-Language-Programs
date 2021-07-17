//Write a Program of find the element of given position from the array
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,arr[9];
	float av,sum;
	printf("Enter Array :\n");
	for(i=0;i<=6;i++)
	{	
		scanf("%d",&arr[i]);
		printf("Array element is : %d\n",arr[i]);
	}
	printf("Please enter the position number: \n");
	scanf("%d",&k);
	if(i>k)
	{
		printf("Element of Array[%d] position is: %d ",k,arr[k]);
	}
	else{
		printf("Error!");
	}

}
