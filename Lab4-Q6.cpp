/*
Task 4.2 Do-While Statement  
Write a C++ program which prompts the user to enter a float value, repeatedly prints the 
value of this floating point variable, decreasing it by 0.5 each time, as long as its value
 remains greater than or equal to 0. Your program should have the following interface. 
Enter any float value: 2.5 
2.5 2.0 1.5 1.0 
0.5 
0 

*/

#include<iostream>
#include<limits>

using namespace std;

int main()
{
	float num;
	
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
	
	
	cout<<num<<endl;
	
	do
	{
		num-=0.5;
		cout<<num<<endl;
	}while(num>0);
	
	return 0;
}