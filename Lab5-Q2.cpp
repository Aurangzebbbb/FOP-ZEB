// print first 100 prime numbers

#include<iostream>

using namespace std;

bool isPrime(int num)
{
	bool prime=true;
	
	if(num==2 || num==3)
	{
		return true;
	}
	
	
	if(num<=0 || num==1)
	{
		return false;
	}
	
	for(int i=2 ; i<=num/2 ; i++)
	{
		if(num%i==0)
		{
			prime=false;
			break;
		}
	}
	
	return prime;
}

int main()
{
	int count=0 , i=2 ; 
	
	cout<<"First 100 prime numbers are........"<<endl<<endl;
	
	
	while(count!=100)
	{
	
		if(isPrime(i))
		{
			cout<<i<<" ";
			count++;
		}
		
		i++;
		
	}
	
	return 0;
	
}