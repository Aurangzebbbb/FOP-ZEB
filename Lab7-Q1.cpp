/* 
Define a function named ‘rightCircular’ using C++ language which takes in four integers as arguments
 and rotates their values to right. For instance, if the parameter list consists of variables a,b,c,d
  and the passed arguments are 2,8,3,7.  After the function call, the respective values of a,b,c,d 
  should be 7,2,8,3. Define another similar function named ‘leftCircular’ which rotates the values
   of the four passed arguments to left. Write a C++ program which prompts the user to enter two
    characters and five integers in the following order; character, integer, integer, character,
	 integer, integer, four-digit integer  
The values of character variables can either be ‘l’ for left or ‘r’ for right. The first 
integer after both characters indicates the number of shifts required and the second one 
indicates the additive constant to be added to each digit of the four-digit integer supplied 
as the fifth input.  
Your program should calculate the value and display result on screen. A sample output is given below.
 You will have to separate the digits of the fifth input before passing them to circular shift functions. 
 
Enter the input. 
	 	L 
2 
	 	1 
R 
	 	1 
0 
	 	1234  
The result is 3452 
1234 will be shifted left 2 (indicated by input # 1 and 2) times yielding (2341 -> 3412). All digits of this number will now be incremented by the additive constant 1(indicated by input #3), thus yielding 4523. This number will now be shifted right by 1 place (indicated by input # 4 and 5), thus yielding 3452. All digits of this number will now be incremented by the additive constant 0(indicated by input #6), thus yielding 3452 as the final output.  

*/


#include<iostream>
#include<iomanip>
#include<conio.h>
#include<limits>

using namespace std;

void rightCircular( int& a , int& b , int& c , int& d)
{
	int temp = d;
	
	d=c;
	c=b;
	b=a;
	a=temp;
	
	return;
	
}

void leftCircular( int& a , int& b , int& c , int& d)
{
	int temp = a;
	
	a=b;
	b=c;
	c=d;
	d=temp;
	
	return;
	
}

int main()
{
	int a , b , c , d  , shift1 , shift2 , add1 , add2 , num ;
	
	char c1 , c2 ;
	
				do
				{
					cout<<"Enter 4 integers (a , b , c , d) ";
					cin>>a>>b>>c>>d;
					
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout<<"Invalid\aInput"<<endl<<endl;
						continue;
					}
					
					else 
					break;
					
				}while(true);
	
	cout<<"Values of variables respectively before rotating: ";
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	
	rightCircular(a , b , c , d);
	
	cout<<"Values of variables respectively after rotating right: ";
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	
	leftCircular(a , b , c , d);
	
	cout<<"Now rotating the result to left , values are: ";
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl<<endl;

	cout<<"-------------------------"<<endl;
	cout<<"Rotating based on choice"<<endl;
	cout<<"-------------------------"<<endl<<endl;

	do
	{
		cout<<"Which way you wanna roatate number ( press l for left , r for right) : ";
		
		c1=getche();
		
		if(c1!='l' && c1!='r')
		{
			cout<<endl<<"Invalid \aInput, TRy again..."<<endl<<endl;
		}
		
		else break;
		
	}while(true);
	
	do
	{
		cout<<endl<<"How many times you wanna rotate: ";
		cin>>shift1;
		
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"Invalid\aInput"<<endl<<endl;
			continue;
		}
		
		else 
		break;
		
	}while(true);
	
	do
	{
		cout<<"Give constant you wanna add in each of digits of number: ";
		cin>>add1;
		
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"Invalid\aInput"<<endl<<endl;
			continue;
		}
		
		else 
		break;
		
	}while(true);
	
	do
	{
		cout<<" (second rotation) Which way you wanna roatate number (l for left , r for right) : ";
		c2=getche();
		
		if(c2!='l' && c2!='r')
		{
			cout<<endl<<"Invalid \aInput, TRy again..."<<endl<<endl;
		}
		
		else break;
		
	}while(true);
	
	
	do
	{
		cout<<endl<<"How many times you wanna rotate this time: ";
		cin>>shift2;
		
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"Invalid\aInput"<<endl<<endl;
			continue;
		}
		
		else 
		break;
		
	}while(true);
	
	do
	{
		cout<<"Give constant you wanna add in each of digits of number: ";
		cin>>add2;
		
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"Invalid\aInput"<<endl<<endl;
			continue;
		}
		
		else 
		break;
		
	}while(true);
	
	
	do
	{
		cout<<"give the 4-digit number: ";
		cin>>num;
		
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"Invalid\aInput"<<endl<<endl;
			continue;
		}
		
		else 
		break;
		
	}while(true);
	
	
	
	
	cout<<"here is the number you entered: "<<num<<endl;
	
	//digits seperation
	
	a=10 , b=10 , c=10 , d=10;
	
	while(num>0)
	{
		if(d==10)
		{
			d=num%10;
			num/=10;
		}
		
		else if(c==10)
		{
			c=num%10;
			num/=10;
		}
		
		else if(b==10)
		{
			b=num%10;
			num/=10;
		}
		
		else
		{
			a=num%10;
			num/=10;
			break;
		}
	}
	
	if(c1=='l')
	{
		for(int i=1 ; i<=shift1 ; i++)
		{
			leftCircular(a , b , c , d);
		}
		
		a+=add1;
		b+=add1;
		c+=add1;
		d+=add1;
	}
	
	else if(c1=='r')
	{
			for(int i=1 ; i<=shift1 ; i++)
			{
				rightCircular(a , b , c , d);
			}
			
		a+=add1;
		b+=add1;
		c+=add1;
		d+=add1;
	}
	
	
	if(c2=='l')
	{
		for(int i=1 ; i<=shift2 ; i++)
		{
			leftCircular(a , b , c , d);
		}
		
		a+=add2;
		b+=add2;
		c+=add2;
		d+=add2;
	}
	
	
	else if(c2=='r')
	{
		for(int i=1 ; i<=shift2 ; i++)
		{
			rightCircular(a , b , c , d);
		}
		
		a+=add2;
		b+=add2;
		c+=add2;
		d+=add2;
	}
	
	
	cout<<"-------------------"<<endl;	
	cout<<"Resultant: "<<a<<b<<c<<d<<endl;
	cout<<"-------------------"<<endl;
	
	
	
	return 0;
}