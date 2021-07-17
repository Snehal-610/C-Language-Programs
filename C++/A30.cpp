//Write a program to read and write data in to file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch[200];
	fstream file;
	file.open("text.txt",ios::out);
	cout << "Write text to be written on file." << endl;
	cin.getline(ch, sizeof(ch));
	file<<ch;	
	file.close();
	
	char s;
	file.open("text.txt",ios::in);
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;
		return -1;
	}
		
	while (!file.eof()) 
	{
		file>>noskipws>>s;	
		cout<<s;	
	}
file.close();
	return 0;
}
