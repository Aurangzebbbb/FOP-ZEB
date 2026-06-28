/*
Write a recursive function that displays alphabets from Z to A. Use this function in
 a C++ program to verify that your function works correctly. 
*/

#include<iostream>

using namespace std;

void print(char ch)
{
	cout<<endl;
	
	if(ch=='z')
	{
		cout<<ch;
		return;
	}
	
	cout<<ch;
	print(++ch);
}

int main()
{
	print('a');
	
	return 0;
}