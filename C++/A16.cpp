//Write a program of Addition, subtraction and multiplication of two numbers using Binary Operator overloading with switch case.
#include<iostream>
using namespace std;
class calculator
{
    private:
        float val;

    public:
        calculator(): val(0)
        {}
        void getdata()
        {           
            cout<<"enter number: ";
            cin>>val;
        }

        void showdata()
        {
            cout<<"value: "<<val<<endl;
        }

        calculator operator + (calculator);
        calculator operator - (calculator);
        calculator operator * (calculator);
};

calculator calculator::operator + (calculator arg2)
{
    calculator temp;
    temp.val = val + arg2.val;
    return temp;
}

calculator calculator::operator - (calculator arg2)
{
    calculator temp;
    temp.val = val - arg2.val;
    return temp;
}

calculator calculator::operator * (calculator arg2)
{
    calculator temp;
    temp.val = val * arg2.val;
    return temp;
}

int main(){
    calculator obj1, obj2, obj3;
    char ch;
    int choice;

    obj1.getdata();
    obj2.getdata();
    cout << "\nSelect your Choice\n1: Addition(+)\n2: Subtraction(-)\n3: Multiplication(*)\n";
    cin >> choice;

    switch (choice)
    {
        case 1:
            obj3 = obj1 + obj2;
            break;
        case 2:
            obj3 = obj1 - obj2;
            break;
        case 3:
            obj3 = obj1 * obj2;
            break;
        default:
            cout << "Invalid choice! " << endl;
    }

    cout << "Result ";
    obj3.showdata();
	return 0;
}
