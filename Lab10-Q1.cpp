/*

Write a C program which declares a 5 x 10 character array, prompts
 the user to enter string literals (consisting of only alphabets) 
 into this array and counts the value of each string (row). For
  counting value of strings, assume a/A=1, b/B=2…..z/Z=26. For instance,
   if the string at row 0 is ‘hello’, it’s value should be calculated as
    (h = 8) + (e = 5) + ( l = 12) + (l = 12) + (o = 15) = 52. Once the values
	 have been calculated, your program should print the string with the highest value on screen. 

*/

#include<iostream>
#include<iomanip>
#include<cctype>

using namespace std;

int main()
{
	char arr[5][10];
	int r[5]={0 , 0 , 0 , 0 , 0};
	
	cout<<"Enter 5 string literals, each of max 9 characters.....press enter after each"<<endl;
	
	for(int i=0 ; i<5 ; i++)
	{
		cout<<"Enter string "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<9 ; j++)
		{
			if(i==0)
			{
				r[i]+=((int)toupper(arr[i][j])-64);
			}
			
			else if(i==1)
			{
				r[i]+=((int)toupper(arr[i][j])-64);
			}
			
			else if(i==2)
			{
				r[i]+=((int)toupper(arr[i][j])-64);
			}
			
			else if(i==3)
			{
				r[i]+=((int)toupper(arr[i][j])-64);
			}
			
			else
			{
				r[i]+=((int)toupper(arr[i][j])-64);
			}
		}
		
	}
	
	int max=r[0] , maxdex;
	
	for(int i=1 ; i<5 ; i++)
	{
		if(r[i]>max)
		{
			max=r[i];
			maxdex=i;
		}
	}
	
	cout<<"The max value string is at row "<<maxdex+1<<" and its value is "<<r[maxdex]<<endl;
	
	for(int i=0 ; i<5 ; i++)
	{
		cout<<r[i]<<endl;
	}
	
	
	return 0;
}