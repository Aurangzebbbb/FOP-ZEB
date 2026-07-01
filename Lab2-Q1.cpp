/* Write a C++ program which prompts the user to enter two integer values, stores them in variables
 named ‘a’ and ‘b’, calculates the following expressions and displays the results on screen. 
 Output of your program must be presentable. You must use minimum possible number of parentheses
  for evaluating these expressions. 
1.	(a + b)2 = a2 + 2ab + b2      
2.	(a - b)2 = a2 - 2ab + b2         
3.	(a + b)3 = a3 + 3a2b + 3ab2 + b3          
4.	(a - b)3 = a3 - 3a2b + 3 ab2 - b3          
5.	a2 - b2 = (a - b) (a + b)          
6.	a3 - b3 = (a - b)3 + 3 a b (a - b)      
7.	a3 - b3 = (a - b) (a2 + a b + b2)         
8.	a3 + b3 = (a + b) (a2 - a b + b2)      
9.	a3 + b3 = (a + b)3 - 3 a b (a + b)  */     

//Ans:

#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;

int main()
{
	int a , b;
	
	do{
		cout<<"Enter first integer a: ";
		cin>>a;

		if(cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout<<"invalid input \a , Try again......"<<endl<<endl;
			continue;
		}

		else
		break;

	}while(true);

	do{
		cout<<"Enter Second integer b: ";
		cin>>b;

		if(cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout<<"invalid input \a , Try again......"<<endl<<endl;
			continue;
		}

		else
		break;

	}while(true);

	
	
	cout<<"1. (a+b)^2 = "<< a*a + b*b + 2*a*b<<endl<<endl;
	
	cout<<"2. (a-b)^2 = "<< a*a + b*b - 2*a*b<<endl<<endl;
	
	cout<<"3. (a+b)^3 = "<< a*a*a + 3*a*a*b + 3*a*b*b + b*b*b<<endl<<endl;
	
	cout<<"4. (a-b)^3 = "<< a*a*a - 3*a*a*b + 3*a*b*b - b*b*b<<endl<<endl;
	
	cout<<"5. a^2 - b^2 = "<< (a+b) * (a-b)<<endl<<endl;
	
	cout<<"6. a^3 - b^3 = "<< (a-b) * (a-b) * (a-b) + 3 * a * b *(a - b)<<endl<<endl;
	
	cout<<"7. a^3 - b^3 = "<< (a-b) * (a*a + a*b + b*b)<<endl<<endl;
	
	cout<<"8. a^3 + b^3 = "<< (a+b) * (a*a - a*b + b*b)<<endl<<endl;
	
	cout<<"9. a^3 + b^3 = "<< (a+b) * (a+b) * (a+b) - 3 * a * b *(a + b)<<endl<<endl;
	
	return 0;
}