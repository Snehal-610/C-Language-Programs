/*Define a class to represent lecture details. Include the following members and the program should handle at lest details of 5 lecturer
Data members
Name of the lecturer Name of the subject Name of course Number of lecturers
Data functions
To assign initial values To add a lecture details
To display name and lecture details*/
#include<iostream>
using namespace std;
class study{
	private:
	string lecturer,subject,course;
	int lecturers;
	
	public:
		void assignData(){
			cout<<"Enter lecturer Details "<<endl;
			cin>>lecturer;
			cout<<"Enter subject title "<<endl;
			cin>>subject;
			cout<<"Enter course title "<<endl;
			cin>>course;
			cout<<"Enter number of lecturers"<<endl;
			cin>>lecturers;
		}
		void displayData();
};

void study :: displayData()
{
	cout<<endl<<"----- Lecture information -----"<<endl;	
	cout<<"lecturer's Name is ----------- "<<lecturer<<endl;
	cout<<"subject's title is ----------- "<<subject<<endl;
	cout<<"course's title is  ----------- "<<course<<endl;
	cout<<"Number of lecturers is ------  "<<lecturers<<endl;
}
int main()
{
	study b1[5];
	for(int i=0;i<5;i++)
	{	
		cout<<"Enter information of "<<i+1<<" lecture"<<endl;
	b1[i].assignData();
	}
	
	for(int i=0;i<5;i++)
	{
	b1[i].displayData();
	}
	return 0;
}
