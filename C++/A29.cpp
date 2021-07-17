//Write a program to read data from text file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	ifstream file;
	file.open("text.txt",ios::in);
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;
		return -1;
	}
		
	while (!file.eof()) 
	{
		file>>noskipws>>ch;	
		cout<<ch;	
	}
file.close();
	return 0;
}
