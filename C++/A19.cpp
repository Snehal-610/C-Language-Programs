//Assume that the test results of a batch of students are stored in three different classes. 
//Class Students are stores the roll number. 
//Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
//The class result can inherit the details of the marks obtained in the test and roll number of students.
#include<iostream>
using namespace std;
class student{
	protected:
	int rollNumber;
	public:
		student(){
			cout<<"Enter Student Information"<<endl
				<<"Enter Student Roll Number = ";
			cin>>rollNumber;
		}
		
};
class test : public student{
	protected:
	int sub1,sub2;
	public:
		test(){
			cout<<"Enter Marks of First Subject = ";
			cin>>sub1;
			cout<<"Enter Marks of Second Subject = ";
			cin>>sub2;
		}
};
class result : public test{
	int totalMarks;
	public:
		result(){
			totalMarks = sub1+sub2;			
		}
		void show();
};
void result :: show(){
	cout<<endl<<"Result of Roll Number "<<rollNumber<<" is Below"<<endl;
	cout<<"Your Marks in First Subject is "<<sub1<<" and Second Subject is "<<sub2<<endl;
	cout<<"Total obtained Marks is "<<totalMarks<<endl;
}
int main(){
	result r;
	r.show();
	return 0;
}
