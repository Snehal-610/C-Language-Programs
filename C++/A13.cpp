//WAP Mathematic - Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading
#include<iostream>
using namespace std;
class Addition {
public:
    int sum(int num1,int num2) {
    	int result;
    	result = num1+num2;
        return result;
    }
    int sum(int num1,int num2, int num3) {
       return num1+num2+num3;
    }
    float sum(float num1,float num2){
		float result;
    	result = num1+num2;
        return result;
	}
};
int main(){
    Addition obj;
    int a,b,x;
    float c,d,y;
    cout<<"Enter two integer number : \n";
    cin>>a>>b;
    x = obj.sum(a,b);
    cout<<"Sum of integer number : "<<x<<endl;
    cout<<"Enter two float number : \n";
    cin>>c>>d;
    y = obj.sum(c,d);
    cout<<"Sum of float number : "<<y<<endl;
return 0;
}
