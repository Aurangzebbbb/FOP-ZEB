/*
Task 4.2 For Statement  
Write a C++ program which prompts the user to enter a float value, repeatedly prints the 
value of this floating point variable, decreasing it by 0.5 each time, as long as its value
 remains greater than or equal to 0. Your program should have the following interface. 
Enter any float value: 2.5 
2.5 2.0 1.5 1.0 
0.5 
0 

*/

#include<iostream>

using namespace std;

int main()
{
	float num;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<num<<endl;
	
	for(int i=0 ; num>0 ; i++)
	{
		num-=0.5;
		cout<<num<<endl;
	}
	
	return 0;
}