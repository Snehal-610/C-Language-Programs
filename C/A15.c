//make string reverse and check the given string is palindrome or not without using string function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char temp,s2[10],s1[10] = "tacocat";
	int a =strlen(s1);
	printf("Lenth of String is = %d\n",a);
	int i,j=a-1;
	for(i=0;i<j;i++)
	{
	  temp = s1[i];
      s1[i] = s1[j];
      s1[j] = temp;
	j--;
	}
printf("Reversed string is : %s\n",s1);
i =0;
j = a-1;
if(s1[i]==s1[j]){
	printf("String is palindrome");
}
else{
	printf("String is not palindrome");
}
}
