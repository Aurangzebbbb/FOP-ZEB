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
#include<cstdlib>
#include<limits>

using namespace std;

int main()
{
	int a , b ;
	
	char ch;
	
	do
	{
		cout<<"Enter the expression to be evaluated in the format  a + b (+ - * / %)  and press enter"<<endl;
	
		cin>>a>>ch>>b;
		
		if(cin.fail())
		{
			cout<<"Invalid operands, \a Rewrite expression to evaluate"<<endl<<endl;
			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		
		else if(ch!='+' && ch!='-' && ch!='*' && ch!='/' && ch!='%')
		{
			cout<<"Invalid operation entered \a , try again"<<endl<<endl;
			continue;
		}
		
		else
		break;
		
	}while(true);
	
	
	if(ch == '+')
	{
		system("cls");
		cout<<a<<ch<<b<<" =  "<<a+b;
	}
	
	else if(ch == '-')
	{
		system("cls");
		cout<<a<<ch<<b<<" =  "<<a-b;
	}
	
	else if(ch == '*')
	{
		system("cls");
		cout<<a<<ch<<b<<" =  "<<a*b;
	}
	
	else if(ch == '/')
	{
		system("cls");
		cout<<a<<ch<<b<<" =  "<<a/b;
	}
	
	else if(ch == '%')
	{
		system("cls");
		cout<<a<<ch<<b<<" =  "<<a%b;
	}
	
	return 0;
	
}