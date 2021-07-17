#include<iostream>
#include<math.h>
using namespace std;
class bankAccount{
	
	protected:
	string name;
	int accNo;
	public:
	float balance;
	string t_Acc;	
		
	int find(int a);
	void createAccount();
	void showAccount();
	void diposite();
	void withdraw();
	void current();
	void saving();
};
int bankAccount :: find(int a)
{
	if(accNo == a)
	{
		showAccount();
		return 1;
	}
	 return 0; 
	 cout<<endl;
}
void bankAccount :: createAccount()
{
	cout<<"Enter New Account Number : "<<endl;
	cin>>accNo;
	cout<<"Enter New Name : "<<endl;
	cin>>name;
	cout<<"Enter New Account Type : "<<endl;
	cin>>t_Acc;
	cout<<"Enter New Balance : "<<endl;
	cin>>balance;
}

void bankAccount :: showAccount()
{
	cout<<endl<<"Your Account Number is ------------> "<<accNo<<endl;
	cout<<"Your Name is ----------------------> "<<name<<endl;
	cout<<"Your Account Type is --------------> "<<t_Acc<<endl;
	cout<<"Your Main Balance is --------------> "<<balance<<endl;
}

void bankAccount :: diposite()
{
	int amount;
	cout<<endl<<"Enter the Amount you want to diposite !"<<endl;
	cin>>amount;
	balance += amount;
	cout<<endl<<"After Diposite. .Your main balance is : "<<balance<<endl; 
}

void bankAccount :: withdraw()
{
	int amount;
	cout<<endl<<"Enter the Amount you want to withdraw !"<<endl;
	cin>>amount;
	if(balance>=amount)
	{
		balance -= amount;
	cout<<endl<<"After Withdraw. . .Your main balance is : "<<balance<<endl; 
	}
	else{
		cout<<endl<<"Insufficient Balance !!! Please check your main Balance"<<endl;
	}
}

void bankAccount :: saving()
{
	float rate=10.00,interest;
	int time;
    cout<<"Enter time in year : ";
    cin>>time;
	interest = balance*pow(+(rate/100.0),time)-balance;
    cout<<endl<<"Your interest amount is : "<<interest<<endl;
    balance += interest;
	cout<<endl<<"Including Interest. . .Your main balance is : "<<balance<<endl;       
}

void bankAccount :: current()
{
	int penalty=50;
	if(balance<=500)
	{
		balance -= penalty;
		cout<<endl<<"Penalty imposed and now your balance is : "<<balance<<endl; 
	}
	else{
		cout<<endl<<"No penalty imposed"<<endl;
	}
	
}

int main()
{
	bankAccount details[2];
	int a,i,choice,look;
	string type;
	cout<<endl<<endl<<"------------------------------------------------"<<endl;
	cout<<"Welcome to C++ Bank. . .Please Select one choice"<<endl;
	cout<<"------------------------------------------------"<<endl<<endl;
	cout<<"Add Bank Account"<<endl;
	for(i=0;i<2;i++)
	{
		details[i].createAccount();
	}
	cout<<"Select any method you want to access"<<endl
		<<"1.Show All Bank Account Details"<<endl
		<<"2.Your Account Details"<<endl
		<<"3.Diposite an ammount"<<endl
		<<"4.Withdraw an ammount"<<endl
		<<"5.Saving Account facility"<<endl
		<<"6.Current Account facility"<<endl
		<<"7.Exit"<<endl<<endl;
	cin>>choice;	
switch (choice)
{
	case 1:
	for(i=0;i<2;i++)
	{
		details[i].showAccount();
	}
	break;
	case 2:
		cout<<endl<<"Enter your account Number: "<<endl;
		cin>>a;
		for(i=0;i<2;i++)
		{
			look = details[i].find(a);
			if(look)
			break;
		}
		if(!look)
			cout<<endl<<"!!!!!-----record not found-----!!!!!"<<endl;
	break;
	case 3:
		cout<<endl<<"Enter your account Number: "<<endl;
		cin>>a;
		for(i=0;i<2;i++)
		{
			look = details[i].find(a);
			if(look)
				details[i].diposite();
			break;
		}
		
		if(!look){
			cout<<endl<<"!!!!!-----record not found-----!!!!!"<<endl;
		}
	break;
	
	case 4:
		cout<<endl<<"Enter your account Number: "<<endl;
		cin>>a;
		for(i=0;i<2;i++)
		{
			look = details[i].find(a);
			if(look)
			details[i].withdraw();
			break;
		}
		if(!look){
			cout<<endl<<"!!!!!-----record not found-----!!!!!"<<endl;
		}
	break;
	
	case 5:
		cout<<"You are Not allowed to used cheque books"<<endl;
		for(i=0;i<2;i++)
		{
			if(details[i].t_Acc=="saving")
			{
				details[i].saving();
			}
		}
			if(details[i].t_Acc!="saving")
			cout<<endl<<"!!!!!-----record not found-----!!!!!"<<endl;
	break;

	case 6:
		cout<<"You are allowed to used cheque books"<<endl;
		for(i=0;i<2;i++)
		{
			if(details[i].t_Acc=="current")
			{
				details[i].current();
			}
		}
			if(details[i].t_Acc!="current")
			cout<<endl<<"!!!!!-----record not found-----!!!!!"<<endl;
	break;

	
	case 7:
		cout<<endl<<"---------Thank you for connecting with C++ Bank. . .Have a nice day---------"<<endl;
		break;
	
	default:
		cout<<endl<<"!!!!!-----Incorrect Choice-----!!!!!";
		break;
}
	return 0;
}
