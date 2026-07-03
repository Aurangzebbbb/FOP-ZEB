/*
cmath’ is a C header file which defines different mathematical functions 
like sin, cos, tan, square root, exponent and many others. Explore this 
file using internet resources and make a list of all major mathematical
 functions that it contains. Using your findings, write a C program which
  can perform different mathematical operations on float variables.
   You must take the values of required variables from the user. 
   Your program must be capable of computing the following operations;
    sin, cos, tan, natural logarithm, common logarithm, exponential, raised to power, square root, ceiling and floor.  
*/


#include<iostream>
#include<iomanip>
#include<limits>
#include<math.h>
#include<conio.h>

using namespace std;

int main()
{
	char choice;
	
	float a , b;
	
	cout<<"---------------------"<<endl;
	cout<<"Scientific Calculator"<<endl;
	cout<<"---------------------"<<endl<<endl;
	
	label1:
	
	cout<<"Press....."<<endl;
	cout<<"1.  sin"<<endl;
	cout<<"2.  cos"<<endl;
	cout<<"3.  tan"<<endl;
	cout<<"4.  natural logarithm"<<endl;
	cout<<"5.  common logarithm"<<endl;
	cout<<"6.  exponential"<<endl;
	cout<<"7.  raised to power"<<endl;
	cout<<"8.  square root"<<endl;
	cout<<"9.  ceil"<<endl;
	cout<<"0.  floor"<<endl;
	
	choice=getch();
	
	switch(choice)
	{
		case '1':
			
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			
			cout<<"The sin of "<<a<<" is "<<sin(a);
			
			break;
			
		case '2':
			
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			
			cout<<"The cos of "<<a<<" is "<<cos(a);
			
			break;
			
		case '3':
			
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			
			cout<<"The tan of "<<a<<" is "<<tan(a);
			
			break;
			
		case '4':
			
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			
			cout<<"The natural logarithm of "<<a<<" is "<<log(a);
			
			break;
			
		case '5':
			
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			
			cout<<"The common logarithm of "<<a<<" is "<<log10(a);
			
			break;
			
		case '6':
			
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			
			cout<<"The exponential of "<<a<<" is "<<exp(a);
			
			break;
			
		case '7':
			
			do
			{
				cout<<"Enter base: ";
				cin>>a;
				
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
				cout<<"Enter exponent: ";
				cin>>b;
				
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
			
			
			cout<<"The answer of "<<a<<"^"<<b<<" is "<<pow(a , b);
			
			break;
			
		case '8':
			
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			
			cout<<"The square root of "<<a<<" is "<<sqrt(a);
			
			break;
			
		case '9':
			
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			cout<<"The ceil of "<<a<<" is "<<ceil(a);
			
			break;
			
		case '0':
			do
			{
				cout<<"Enter value: ";
				cin>>a;
				
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
			
			cout<<"The floor of "<<a<<" is "<<floor(a);
			
			break;
			
		default:
			
			system("cls");
			cout<<endl<<"Invalid \aInput"<<endl;
			goto label1;
		
	}
	
	return 0;
}