#include<iostream>
using namespace std;
class Box{
	public:
		static int objectCount;
		Box(double l =2.0,double h = 5.0,double b=2.0)
		{
			cout<<"Constructor called"<<endl;
			length = l;
			height = h;
			breath = b;
			objectCount++;
		}
		double volum()
		{
			return length*breath*height;
		}
	private:
		double length;
		double height;
		double breath;
};
int Box::objectCount=0;

int main()
{
	Box Box1(3.3,1.2,1.5);
	Box Box2(8.5,6.0,2.0);
	cout<<"Total Objects:"<<Box::objectCount<<endl;
	return 0;
}
