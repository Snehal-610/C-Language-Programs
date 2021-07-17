//Write a program of to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;
class addstring
{
  public :
    char a[10],b[10];
	
	addstring(char str1[],char str2[])
	{
   		strcpy(this->a, str1);
   		strcpy(this->b, str2);
	}
	
	void operator +()
	{
	  cout<< "Concatate string is : " <<strcat(a,b);
	}
};
int main(){
    char str1[10];
    char str2[10];
    cout<<"Enter First string : ";
    gets(str1);
    cout<<"Enter Second string : ";
    gets(str2);
    addstring a1(str1,str2);
    +(a1);
return 0;
}
