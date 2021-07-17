//Define a class to represent a book shop Include the following members: Data Member:
//-Name of Author
//-Name of Title
//-Name of Price
//-Name Publisher Member Functions
//-To Assign Values
//-To Display Values
#include<iostream>
using namespace std;
class books{
	private:
	string author,title,publisher;
	float price;
	
	public:
		void assignData(){
			cout<<"Enter Books information "<<endl;
			cout<<"Enter Author Details "<<endl;
			cin>>author;
			cout<<"Enter Book title "<<endl;
			cin>>title;
			cout<<"Enter Publisher Details "<<endl;
			cin>>publisher;
			cout<<"Enter Books Price"<<endl;
			cin>>price;
		}
		void displayData();
};

void books :: displayData()
{
	cout<<"----- Books information -----"<<endl;	
	cout<<endl<<"Book's Author Name is --- "<<author<<endl;
	cout<<"Book's title is --------- "<<title<<endl;
	cout<<"Book's Publisher is  ---- "<<publisher<<endl;
	cout<<"Book's price is --------  "<<price<<endl;
}
int main()
{
	books b1;
	b1.assignData();
	b1.displayData();
	return 0;
}
