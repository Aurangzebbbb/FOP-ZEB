/*
Task 4.4 ‘Do-WHile’ Statement
 Write a C++ program which takes an integer input from 
user in the variable named ‘num’, calculates the sum of all integers from 1 to 
‘num’ and displays this sum on screen. Your program should have the following interface. 
 
Enter any value: 10 
	 	Sum of integers from 1 to 10 is: 55 
*/

#include<iostream>
#include<limits>

using namespace std;

int main()
{
	int num , sum=0 , i=1;
	
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
	
	
	do
	{
		sum+=i;
		
		i++;
	}while(i<=num);
	
	cout<<"Sum of integers from "<<1<<" to "<<num<<" is "<<sum<<endl;
	
	return 0;
}

