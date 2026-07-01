/*
		(using for loop)
 Write a C++ program which takes an integer input from the user, calculates the factorial of this number using 
 loop statement and displays the result on screen. Your program should have the following interface. 
	 	Enter any value to calculate its Factorial: 5 
Factorial of 5 is: 120 
*/

#include<iostream>
#include<limits>

using namespace std;

int main()
{
	int num , factorial=1;
	
	do
	{
		cout<<"Enter an integer: ";
		cin>>num;
		
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
	
	
	for(int i=1 ; i<=num ; i++)
	{
		factorial*=i;
	}
	
	cout<<"Factorial of "<<num<<" is "<<factorial<<endl;
	
	return 0;
}
