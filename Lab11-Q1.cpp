// under work.....

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

void giveFrequency(string str , int* freq)
{
	int size= giveSize(str);
	
	for(int j=0 ; j<size ; j++)
	{
		for(int i=0 ; i<size ; i++)
		{
			if(str[j]==str[i])
			{
				freq[j]++;
			}
		}
	}
}

int remover(string& str , char ch , int freq)
{
	int count=0 , size = giveSize(str);
	
	for(int i=0 ; i<size ; i++)
	{
		if(ch==str[i])
		{
			size--;
			str[i]=str[i+1];
			count++;
			
			if(count==freq)
			{
				break;
			}
		}
		
		
	}
	
	return size;	
}

int remove(string& str , int *freq)
{
	int size = giveSize(str);
	
	for(int i=0 ; i<size ; i++)
	{
		size-=remover(str , str[i] , freq[i]-1);
	}
	
	
	return size;
	
}

int main()
{
	string str;
	
	cout<<"Enter a string: ";
	cin>>str;
	
	const int sizeFreq=giveSize(str);
	
	int frequency[sizeFreq];
	
	fill(frequency , sizeFreq , 0);
	
	giveFrequency( str , frequency);
	
	cout<<"New size after duplicate removal is: "<<remove(str , frequency)<<endl;
	cout<<"Modified string is "<<str<<endl;
	
	return 0;
}