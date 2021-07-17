//Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. 
//Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class person{
	string name,profession;
	int age;
	public:
		person()
		{
			cout<<"----- Enter Person information -----"<<endl
				<<"Enter Your name -------- ";
			cin>>name;
			cout<<"Enter your age --------- ";
			cin>>age;
			cout<<"Enter your profession -- ";
			cin>>profession;
		}
		void show();
};
void person :: show(){
	cout<<endl<<"Your Name is ----------- "<<name<<endl;
	cout<<"Your Age is ------------ "<<age<<endl;
	cout<<"Your Profession is ----- "<<profession<<endl;
}
class student : public person{
	float percentage;	
	public:
		student()
		{
			cout<<"Enter percentage ------ ";
			cin>>percentage;
		}
		void result(){	cout<<"Your percentage is ----- "<<percentage<<endl<<endl;	}
};

class teacher : public person{
	int salary;
	public:
		teacher()
		{
			cout<<"Enter Your Salary ---- ";
			cin>>salary;	
		} 
		void income(){	cout<<"Your Salary is ------ "<<salary<<endl<<endl;	}
};

int main()
{
	student perc;
	perc.show();
	perc.result();

	teacher slry;
	slry.show();
	slry.income();
	return 0;
}
