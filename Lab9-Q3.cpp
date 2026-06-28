// functions for input , printing 2d array

#include<iostream>
#include<iomanip>

using namespace std;

const int rows=2;
const int cols=3;

void input(int ar[][cols])
{
	cout<<"Inputting values ....."<<endl;
	
	for(int i=0 ; i<rows ; i++)
	{
		for(int j=0 ; j<cols ; j++)
		{
			cout<<"Enter value for row "<<i+1<<" and col "<<j+1<<" : ";
			cin>>ar[i][j];
		}
	}
}

void print(int ar[][cols])
{
	cout<<"Here is the content of array: "<<endl;
	
	for(int i=0 ; i<rows ; i++)
	{
		for(int j=0 ; j<cols ; j++)
		{
			cout<<left<<setw(4)<<ar[i][j];
		}
		
		cout<<endl;
	}
}

int main()
{
	int ar[rows][cols];
	
	input(ar);
	
	print(ar);
	
	return 0;
}