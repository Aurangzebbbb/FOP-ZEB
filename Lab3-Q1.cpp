/* Write a C program which performs five basic arithmetic operations (+, -, *, /, %). 
Your program should prompt the user to enter two integers and once character,
 where the character variable will indicate the specific arithmetic operation 
 to be performed. Your program should have the following interface. 
 In the following example, 5 and 7 are the two integers and + is the character value entered by the user.
  Based on the value of this character variable, your program should perform the appropriate arithmetic operation.
 You have to write this program using both ‘if/else’ and ‘switch’ statements, one by one.
  Output of your program must be presentable.       
 
Enter the arithmetic expression to be evaluated:  	 
5 	 
+ 
7   	 
5 + 7 = 12 

(using if else statements)
*/	 


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a , b ;
	
	char ch;
	
	cout<<"Enter the expression to be evaluated in the format  a + b  and press enter"<<endl;
	
	cin>>a>>ch>>b;
	
	if(ch == '+')
	{
		cout<<a<<ch<<b<<" =  "<<a+b;
	}
	
	else if(ch == '-')
	{
		cout<<a<<ch<<b<<" =  "<<a-b;
	}
	
	else if(ch == '*')
	{
		cout<<a<<ch<<b<<" =  "<<a*b;
	}
	
	else if(ch == '/')
	{
		cout<<a<<ch<<b<<" =  "<<a/b;
	}
	
	else if(ch == '%')
	{
		cout<<a<<ch<<b<<" =  "<<a%b;
	}
	
	else
	{
		cout<<"invalid operation"<<endl<<endl;
		cout<<"exiting..............."<<endl;
	}
	
	return 0;
	
}