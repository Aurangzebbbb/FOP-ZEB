/*
Write a recursive function that displays integers less than or equal
 to a specific number and greater than or equal to 0, in descending order.
  Use this function in a C++ program which prompts the user to enter the value
 of N and displays all integers from N to 0 in descending order
*/

#include<iostream>

using namespace std;

void print(int num)
{
	cout<<"  ";
	
	if(num<0)
	{
		return;
	}
	
	cout<<num;
	
	print(--num);
}

int main()
{
	int num;
	
	cout<<"Enter an integer: ";
	cin>>num;
	
	cout<<endl;
	
	print(num);
	
	return 0;
}