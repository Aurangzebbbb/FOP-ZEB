/*

Write a C++ function that takes a single string as argument,
 removes all duplicate characters in the string and returns 
 the size of the modified string. Use this function in your
  main program to confirm that your function works correctly. 

*/

#include<iostream>

using namespace std;

void fill(int *freq , int size , const int num)
{
	for(int i=0 ; i<size ; i++)
	{
		freq[i]=num;
	}
}

int giveSize(string str)
{
	int count=0;
	
	for(int i=0 ; str[i]!='\0' ; i++)
	{
		count++;
	}
	
	return count;
}

int giveFrequency(string str , int index)
{
	int size= giveSize(str) , count=0;
	
	char target= str[index];
	
		for(int i=0 ; i<size ; i++)
		{
			if(target==str[i])
			{
				count++;
			}
		}
		
		return count;
	
}

int remover(string& str , char ch , int freq)
{

	
	int count=0 , size = giveSize(str) ;
	
	if(freq==0)
	{
		return size;
	}
	
	
		for(int i=0 ; i<size ; i++)
		{
			
			
			
			if(ch==str[i])
			{
				for(int j=i ; j<size ; j++)
				{
					str[j]=str[j+1];
				
				}
				
				count++;
				
				str[size-1]='\0';
					
				size=giveSize(str);
				
			}
			
			if(count==freq)
			{
				break;
			}
			
			
		}
		
	
	return size;	
}

int remove(string& str)
{
	
	int size = giveSize(str);
	
	
	for(int i=0 ; i<size ; i++)
	{
		size=remover(str , str[i] , giveFrequency(str , i)-1);
		
	}
	

	return size;
	
}

int main()
{
	string str;
	
	cout<<"Enter a string: ";
	cin>>str;
		
	cout<<"New size after duplicate removal is: "<<remove(str)<<endl;
	cout<<"Modified string is "<<str<<endl;
	
	
	return 0;
}