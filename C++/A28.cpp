//Write a program to add data in text File.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch[200];
	fstream file;
	file.open("texta.txt",ios::out);
	cout << "Write text to be written on file." << endl;
	cin.getline(ch, sizeof(ch));
	file<<ch;	
	file.close();
	return 0;
}
