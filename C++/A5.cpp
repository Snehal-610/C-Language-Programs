/*Define a class to represent a bank account. Include the following members: Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/
#include<iostream>
using namespace std;
class bankAcc{
	string name,accType;
	int balance,accNo;
	public:
		void input();
		void deposite();
		void withdraw();
		void display();
};

void bankAcc :: input(){
	cout<<"Enter New Account Number : "<<endl;
	cin>>accNo;
	cout<<"Enter New Name : "<<endl;
	cin>>name;
	cout<<"Enter New Account Type : "<<endl;
	cin>>accType;
	cout<<"Enter New Balance : "<<endl;
	cin>>balance;
}

void bankAcc :: deposite(){
	int amount;
	cout<<endl<<"Enter the Amount you want to diposite !"<<endl;
	cin>>amount;
	balance += amount;
//	cout<<endl<<"After Diposite. .Your main balance is : "<<balance<<endl; 
}

void bankAcc :: withdraw(){
	int amount;
	cout<<endl<<"Enter the Amount you want to withdraw !"<<endl;
	cin>>amount;
	if(balance>=amount)
	{
		balance -= amount;
//	cout<<endl<<"After Withdraw. . .Your main balance is : "<<balance<<endl; 
	}
	else{
		cout<<endl<<"Insufficient Balance !!! Please check your main Balance"<<endl;
	}
}

void bankAcc :: display(){
	cout<<endl<<"Your Account Number is ------------> "<<accNo<<endl;
	cout<<"Your Name is ----------------------> "<<name<<endl;
	cout<<"Your Account Type is --------------> "<<accType<<endl;
	cout<<"Your Main Balance is --------------> "<<balance<<endl;

}

int main(){
	bankAcc b1;
	b1.input();
	b1.deposite();
	b1.display();
	b1.withdraw();
	b1.display();
	return 0;
}
