/*
Write a function in C++ language which takes two parameters as arguments,
 the first being an integer array and the second being the size of this 
 integer array, and sorts this integer array in descending order. Write a 
 similar function which takes the same arguments, but sorts the integer 
 array in ascending order. Write a C++ program which takes integer values 
 from user, inserts them into an integer array, uses these two functions to 
 sort the array in ascending and descending order and prints the results on screen.
  You can take any size of the integer array.     
*/


#include<iostream>
#include<limits>

using namespace std;

const int size=7;


void ascendingSort(int * ar , int size)
{
	for(int j=0 ; j<size-1 ; j++)
	{
		
		for(int i=0 ; i<size-1 ; i++)
		{
			if(ar[i]>ar[i+1])
			{
				int temp=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp;
			}
		}
		
	}
}

void descendingSort(int * ar , int size)
{
	for(int j=0 ; j<size-1 ; j++)
	{
		
		for(int i=0 ; i<size-1 ; i++)
		{
			if(ar[i]<ar[i+1])
			{
				int temp=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp;
			}
		}
		
	}
}


int main()
{
	int ar[size];
	
	for(int i=0 ; i<size ; i++)
	{
		do
		{
			cout<<"Enter value "<<i+1<<" : ";
			cin>>ar[i];	
			
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
		
		
	}
	
	cout<<"Normal array: ";
	
	for(int i=0 ; i<size ; i++)
	{
		cout<<ar[i]<<" ";		
	}
	
	cout<<endl;
	
	ascendingSort(ar , size);
	
	cout<<"Ascending ordered: ";
	
	for(int i=0 ; i<size ; i++)
	{
		cout<<ar[i]<<" ";		
	}
	
	cout<<endl;
	
	descendingSort(ar , size);
	
	cout<<"Descending ordered: ";
	
	for(int i=0 ; i<size ; i++)
	{
		cout<<ar[i]<<" ";		
	}
	
	cout<<endl;
	
	
	return 0;
}