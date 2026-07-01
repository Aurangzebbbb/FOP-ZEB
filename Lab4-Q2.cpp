/*  (using do-while statements)  
Write a C program which takes an integer input from the user, prints all even and odd integers less than or equal to this number and greater than or equal to1, calculates the sum of these even and odd integers separately and displays results on the screen. Your program should have the following interface. 
 
Enter a number: 7 
	 	Odd numbers less than or equal to 7 are :1, 3, 5, 7 	 
Even numbers less than or equal to 7 are: 
	 	2, 4, 6 
 
	 	Sum of odd numbers: 16 
Sum of even numbers: 12 

*/

#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;

int main()
{
	int num , oddSum=0 , evenSum=0 , i=1;
	
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
	
	
	
	cout<<"Odd number less than or equal to "<<num<<" are: ";
	do
	{
		if(i%2 != 0)
		{
			cout<<i<<" , ";
			oddSum+=i;
		}
		
		i++;
	}while(i<=num);
	
	cout<<"\b"<<"\b"<<" \n";
	
	i=1;
	
	cout<<"Even number less than or equal to "<<num<<" are: ";
	do
	{
		if(i%2 == 0)
		{
			cout<<i<<" , ";
			evenSum+=i;
		}
		
		i++;
	}while(i<=num);
	
	cout<<"\b"<<"\b"<<" \n";
	
	cout<<"Sum of add numbers is "<<oddSum<<endl;
	cout<<"Sum of Even numbers is "<<evenSum<<endl;
	
	 
	return 0;
}