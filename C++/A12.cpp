//Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class cal
{
  public :
    inline int mul(int x,int y)
    {
      return (x*y);
    }
    inline int cube(int x)
    {
      return (x*x*x);
    }
};
int main()
{
    int a,b;
    cout<<"Enter value of a and b : \n";
    cin>>a>>b;
    cal obj;
    cout<<"\nMultiplication value is : "<<obj.mul(a,b);
    cout<<"\nCube value is : "<<obj.cube(a);
    return 0;
} 

