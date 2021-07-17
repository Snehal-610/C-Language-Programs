/*Write a program of to display in this format using class
Roll No Sub1 Sub2 Sub3 Total Percentage
 1 		30 	25 		45 100 
 2 		25 	20 		25 70 
 3 		20 	15 		35 70 
 4 		35 	30 		40 105*/
#include<iostream>
using namespace std;
class result{
	public:
	int rNo,sub1,sub2,sub3,total,percentage;
	const int subMark = 100;
	const int tMarks = 300;
	int getMarks();
	
	void perc()
	{
	 total = sub1+sub2+sub3;	
	 percentage = (total*subMark)/tMarks;
	}
	
	int showResult();
};
int result :: getMarks()
{
	cout<<"Enter Your roll number = "<<endl;
	cin>>rNo;
	cout<<"Enter Your First Subject Marks = "<<endl;
	cin>>sub1;
	cout<<"Enter Your Second Subject Marks = "<<endl;
	cin>>sub2;
	cout<<"Enter Your Third Subject Marks = "<<endl;
	cin>>sub3;
	perc();
}
int result :: showResult()
{
	if(rNo<10 && sub1<=subMark && sub2<=subMark && sub3<=subMark  && total<=tMarks)
	{
	cout<<"|  "<<rNo<<"  |";
	cout<<"|  "<<sub1<<"  |";
	cout<<"|  "<<sub2<<"  |";
	cout<<"|  "<<sub3<<"  |";
	cout<<"|  "<<total<<"  |";
	cout<<"|  "<<percentage<<"  |";
	cout<<endl;
	}
	else {
		cout<<"Please Enter Valid Data !!!!!!!"<<endl;
	}
}
int main()
{
	result school[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		school[i][j].getMarks();
		}	
	}
	cout<<endl<<"Your Marksheet is show in below table"<<endl;
	cout<<" ---------------------------------------------- "<<endl;
	cout<<"| Rno | Maths | Scien | Engli | Total | Percen |"<<endl;
	cout<<" ---------------------------------------------- "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		school[i][j].showResult();
		}
	}
	cout<<" ---------------------------------------------- "<<endl;
	return 0;
}
