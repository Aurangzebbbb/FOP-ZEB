/*
Task 4.4 ‘while’ Statement
 Write a C++ program which takes an integer input from 
user in the variable named ‘num’, calculates the sum of all integers from 1 to 
‘num’ and displays this sum on screen. Your program should have the following interface. 
 
Enter any value: 10 
	 	Sum of integers from 1 to 10 is: 55 
*/

#include<iostream>

using namespace std;

int main()
{
	int num , sum=0 , i=1;
	
	cout<<"Enter an integer: ";
	cin>>num;
	
	while(i<=num)
	{
		sum+=i;
		
		i++;
	}
	
	cout<<"Sum of integers from "<<1<<" to "<<num<<" is "<<sum<<endl;
	
	return 0;
}

