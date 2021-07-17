//display a matrix using class
#include<iostream>
using namespace std;
class matrix{
	int mat[3][3],i,j;
	public:
int matrik()
	{
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
			cin>>mat[i][j];		
			}
		}		
		cout<<"Your Matrix is Below"<<endl;
	for(i=0;i<=2;i++)
		{	
			cout<<" [ ";
			for(j=0;j<=2;j++)
			{
			cout<<" "<<mat[i][j]<<" ";		
			}
			cout<<" ] "<<endl;
		}
	}
	
};

int main(){
	matrix m1;
	cout<<"Enter Matrix Elements"<<endl;
	m1.matrik();
	return 0;
}
