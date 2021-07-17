#include<iostream>
using namespace std;
template <class T>
void sort(T arr[], int SIZE){
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter array size:";
	cin>>n;
	int int_array[n];
	cout<<"Entner integer array elements:"<<endl;
	for (int i = 0; i < n; i++)
		cin>>int_array[i];
	sort(int_array,n);
	cout<<"After sorting they are :"<<endl;
	for (int i = 0; i < n; i++)
		cout<<int_array[i]<<", ";
	return 0;
}
