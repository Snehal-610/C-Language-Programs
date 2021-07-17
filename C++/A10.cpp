//Write a program of find the simple interest using constructor with dynamic initialization. Make constructor like Interest (int principal, int year, int rate) Interest (int principal, int year, float rate = 2.5)
#include<iostream>
using namespace std;
class interest{
	int principal,year;
	float rate,returnVal;
	
	public:
		interest(int p,int y,float r);
		interest(int p,int y,int r);
		void display();
};
interest :: interest(int p,int y,float r){
	principal = p;
	year = y;
	rate = r;
	returnVal = principal;
	for(int i = 0; i<y; i++)
	{
		returnVal = returnVal*(1+rate);
	}
}
interest :: interest(int p,int y,int r){
		principal = p;
	year = y;
	rate = float(r)/100;
	returnVal = principal;
	for(int i = 0; i<y; i++)
	{
		returnVal = returnVal*(1+rate);
	}
}
void interest :: display()
{
	cout<<endl<<"Your Principal amount was "
	<<principal<<" return value after "
	<<year<<" Years is "<<returnVal<<endl;
}
int main(){
	int p,y,r;
	float R;
	cout<<"Eneter Value of principal, year and rate of interest in decimal value : "<<endl;
	cin>>p>>y>>R;
	interest obj(p,y,R);	
	obj.display();	
	
	cout<<"Eneter Value of principal, year and rate of interest : "<<endl;
	cin>>p>>y>>r;
	interest obj1(p,y,r);
	obj1.display();	
	return 0;
}
