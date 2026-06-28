/*
You have seen some useful string manipulation functions included in the 
library header string.h. Some of these functions include ‘strcpy’, ‘strcmp’,
 ‘strcat’ and ‘strlen’ Write C functions for implementing the working of these
  functions using pointers. Use these functions in your main program to confirm
   that your functions work correctly. 
 

*/

#include<iostream>

using namespace std;

int strlen( char* str )
{
	int count=0 ; 
	
	for(int i=0 ; str[i]!='\0' ; i++)
	{
		count++;
	}
	
	return count;
}

void strcpy( char*& str , char* source)
{
	int size1= strlen(str);
	int size2= strlen(source);

		for(int i=0 ; i<size2 ; i++)
		{
			str[i]=source[i];
		}
		
		str[size2]='\0';

}

void strcat(char*& str , char* source)
{
	int size= strlen(str)+strlen(source);
	
	int k=0;
	
	for(int i=strlen(str) ; i<size && k<strlen(source) ; i++ )
	{
		str[i]=source[k];
		
		k++;
	}

	str[size]='\0';

}

int strcmp(char* str1 , char* str2)
{
	for(int i=0 ; str1[i]!='\0' && str2[i]!='\0' ; i++)
	{
		if(str1[i]==str2[i])
		continue;
		
		else
		{
			return (int)str1[i]-(int)str2[i];
		}
	}
	
	return 0;
}

int main()
{
	char str1[10]="Hello ";
	char str2[10]="world!";
	
	strcat(str1 , str2);
	
	cout<<str1<<endl;
	
	cout<<"Copying str2 to str 1......"<<endl;
	
	strcpy(str1 , str2);
	cout<<"the copied string is "<<str1;
	
	cout<<"Now comparing string one and two by strcmp......."<<endl;
	cout<<"The difference in both is "<<strcmp("Hell" , "Hello");	
	return 0;
	
}