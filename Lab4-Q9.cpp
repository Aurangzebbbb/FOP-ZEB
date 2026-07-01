/*
Task 4.5 ‘for’ Statement 
The Greatest Common Divisor (GCD) of two integers is the largest integer that 
evenly divides both the numbers. Write a C++ program that returns the GCD of two
 numbers entered by the user. Your program should have the following interface. 
	 	Enter the first number: 35 
Enter the second number: 45 
	 	GCD of 35 and 45 is: 5 
*/

#include<iostream>
#include<limits>

using namespace std;

int main()
{
	int num1 , num2 , gcd;
	
	do
	{
		cout<<"Enter first integer: ";
		cin>>num1;
		
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
		cout<<"Enter second integer: ";
		cin>>num2;
		
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
	
	
	for(int i=1 ; i<=num1/2 || i<=num2/2 ; i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		}
	}
	
	cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<endl;
	
	return 0;
}