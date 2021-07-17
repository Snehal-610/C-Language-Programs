//Write a program to find the max number from given two numbers using friend function 
#include<iostream>
using namespace std;

class Test {
private:
   int x, y;
public:
   void input() {
       cout<<"Enter first numbers:";
       cin>>x;
       cout<<"Enter second numbers:";
	   cin>>y;
	  }

   friend void find(Test t);
};

void find(Test t) {
   if (t.x > t.y) {
       cout<<endl<<"Largest number is:"<<t.x;
   } else {
       cout<<endl<<"Largest number is:"<<t.y;
   }
}
int main() {
   Test t;
   t.input();
   find(t);

   return 0;
}
