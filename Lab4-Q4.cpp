/*
		(using while loop)
 Write a C++ program which takes an integer input from the user, calculates the factorial of this number using 
 loop statement and displays the result on screen. Your program should have the following interface. 
	 	Enter any value to calculate its Factorial: 5 
Factorial of 5 is: 120 
*/

#include<iostream>

using namespace std;

int main()
{
	int num , factorial=1 , i=1;
	
	cout<<"Enter an integer to calculate its factorial: ";
	cin>>num;
	
	while(i<=num)
	{
		factorial*=i;
		
		i++;
	}
	
	cout<<"Factorial of "<<num<<" is "<<factorial<<endl;
	
	return 0;
}
