//Write a Program to read and write data into file using class Object.
//C++ program to write and read object using read and write function.
#include <iostream>
#include <fstream>
using namespace std;
class student
{
    private:
        char name[30];
        int age;
    public:
        void getData()
        { cout<<"Enter student name:"; cin.getline(name,30);
          cout<<"Enter student age:"; cin>>age;
        }
        void showData()
        {
        cout<<"Student Name is: "<<name<<" and Age is: "<<age<<endl;
        }
};
 
int main()
{
    student s; 
    ofstream file;
 
	file.open("student.txt",ios::out);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"File created successfully. . .\n"<<endl;
 
    s.getData();    
    file.write((char*)&s,sizeof(s));    
 
    file.close();  
    cout<<"\nFile saved and closed succesfully. . .\n"<<endl;
    ifstream file1;
    file1.open("student.txt",ios::in);
    if(!file1){
        cout<<"Error in opening file..";
        return 0;
    }
    file1.read((char*)&s,sizeof(s));
 
    s.showData();
    file1.close();    
    return 0;
}
