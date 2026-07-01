/*
Write a C++ program which reads in a number from user, stores it in a variable named ‘N’
 and calculates the sum of powers using the following formula. 
Sum = 11 + 22 + 33 +……+NN 
Your program should have the following interface. 
	 	Enter a number: 4 
	 	Sum = 1^1 + 2^2 + 3^3 + 4^4 = 288 
*/

int power(int n , int p)
{
	int value=1;	
	for(int i=1 ; i<=p ; i++)
	{
		value*=n;
	}
	
	return value;
}

#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;

int main()
{
	int n , sum=0;
	
	do
	{
		cout<<"Enter an integer: ";
		cin>>n;
		
		if(cin.fail())
		{
			cout<<"Invalid \aInput"<<endl<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			continue;
		}
		
		else
		break;
	}while(true);
	

	for(int i=1 ; i<=n ; i++)
	{
		cout<<i<<"^"<<i<<"+";
		
		sum+=power(i , i);
	}
	
	cout<<"\b : "<<sum;

	
	
	return 0;
}