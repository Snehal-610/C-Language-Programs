//Assume a class cricketer is declared. Declare a derived class batsman from cricketer .
//Data member of batsman. Total runs, Average runs and best performance.
//Member functions input data, calculate average runs, Display data. (Single Inheritance)
#include<iostream>
using namespace std;
class cricketer{
	protected:	
		int m1,m2,m3;
	public:
		void inputData();
};
void cricketer :: inputData(){
	cout<<"Enter Three Match Score of that cricketer : "<<endl;
	cin>>m1>>m2>>m3;
	cout<<"First match score = "<<m1<<endl<<"Second match score = "<<m2<<endl<<"Third match score = "<<m3<<endl;
}

class batsman : public cricketer{
		int totalRuns,bestPerform;
	public:
		float avgRuns;
		void calculate();
		void Performance();
};
void batsman :: calculate(){
	totalRuns = m1+m2+m3;
	avgRuns = float(totalRuns)/3;
	cout<<"Total Runs is = "<<totalRuns<<endl;
	cout<<"Average Runs is = "<<avgRuns<<endl;
}
void batsman :: Performance(){
	if(m1>m2 && m1>m3)
	{
		cout<<"Best Performance is "<<m1<<endl;
	}
	else if(m2>m3 && m1!=m2){
		cout<<"Best Performance is "<<m2<<endl;		
	}
	else if(m3>m2 && m1!=m3){
		cout<<"Best Performance is "<<m3<<endl;		
	}
	else{
		cout<<"Two or All Players score are equal"<<endl;
	}
}
int main(){
	batsman b1;
	b1.inputData();
	b1.calculate();
	b1.Performance();
	return 0;
}
