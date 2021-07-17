//Addition of two Matrix using Class.
#include<iostream>
using namespace std;
class matrix{
	int m1[3][3] = { {1,2,3},{2,3,4},{5,6,7} };
	int m2[3][3] = { {4,6,8},{9,7,5},{3,1,0} };
	int m3[3][3],i,j;
	public:
int mat()
	{
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
		m3[i][j] = m1[i][j] + m2[i][j];		
			}
		}
	cout<<"Your Matrix is Below"<<endl;
	for(i=0;i<=2;i++)
		{	
			cout<<" [ ";
			for(j=0;j<=2;j++)
			{
			cout<<" "<<m3[i][j]<<" ";		
			}
			cout<<" ] "<<endl;
		}	
}
};
int main(){
	matrix m;
	m.mat();
	return 0;
}
