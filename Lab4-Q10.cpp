/*
Task 4.5 ‘Do-While’ Statement 
The Greatest Common Divisor (GCD) of two integers is the largest integer that 
evenly divides both the numbers. Write a C++ program that returns the GCD of two
 numbers entered by the user. Your program should have the following interface. 
	 	Enter the first number: 35 
Enter the second number: 45 
	 	GCD of 35 and 45 is: 5 
*/

#include<iostream>

using namespace std;

int main()
{
	int num1 , num2 , gcd , i=1;
	
	cout<<"Enter first number: ";
	cin>>num1;
	
	cout<<"Enter second number: ";
	cin>>num2;
	
	do
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		}
		
		i++;
	}while( i<=num1/2 || i<=num2/2 );
	
	cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<endl;
	
	return 0;
}