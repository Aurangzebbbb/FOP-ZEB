/*
Write a  C++ program which declares two integer arrays of 5 indexes each,
 reads in integer values from user into one of these arrays, copies the 
 values of this array into the second array, reads values from the indexes
  of the second array one by one and prints the respective number of *s on separate lines.  
  */
  
#include<iostream>
#include<limits>

using namespace std;

int main()
{
	int ar1[5];
	int ar2[5];
	
	cout<<"Enter 5 values to array..........."<<endl<<endl;
	
	for(int i=0 ; i<5 ; i++)
	{
		
		do
		{
			cout<<"Enter vlaue "<<i+1<<" : ";
			cin>>ar1[i];
			
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout<<"Invalid\aInput"<<endl<<endl;
				continue;
			}
			
			else 
			break;
			
		}while(true);
		
		
		ar2[i]=ar1[i];
		
	}
	
	cout<<endl;
	
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=1 ; j<=ar2[i] ; j++)
		{
			cout<<'*'<<" ";	
		}
		
		cout<<endl;	
		
	}
	
	return 0;
}