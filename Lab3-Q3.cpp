 /*Company ‘CarsNLoans’ offers car loans to its customers. Every year, 
 the company spends thousands of rupees for printing the tariff brochures.
  It is now planning to cut down on this expenditure by making a small computer 
  application available to its customers using which the customers can calculate
   the monthly installment rates. You have been asked to write a C code for this
    application. Your program should prompt the user to enter values of the following parameters. 
•	Vehicle Price (Total cost of car) 
•	Down Payment (First payment made while purchasing the car) 
•	Installment Months (Number of months for which loan is required) 
 
 Here is the method to calculate “Monthly Installments”. 
•	Payable Amount = Vehicle Price – Down Payment 
•	New Payable Amount = (Payable Amount + (Payable Amount* Interest Rate)) 
•	Monthly Installment = New Payable Amount / Installment Months 
 
Interest Rate is applicable as below; 
Installment Months 	Interest Rate 
Less than or equal to 12 	10% of Payable amount 
Greater than 12 and less than or equal to 24 	15% of Payable amount 
Greater than 24 and less than or equal to 36 	20% of Payable amount 
Greater than 36 and less than or equal to 48 	25% of Payable amount 
Greater than 48 and less than or equal to 60 	30% of Payable amount 
 
 
 
 
Your program should have the following interface. 
 
 	Enter the Vehicle Price in rupees: 800000 
Enter the Down Payment in rupees: 300000  
 	For how many months, do you want to lease the car: 36 Your Monthly Installment is: Rs.16666.7  
*/

#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;

int main()
{
	float vPrice , dPayment , payable ,  monthly ; 
	
	int installMonths;

	
	do
	{
		cout<<"Enter vehicle price in rupees: ";
		cin>>vPrice;
		
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
		cout<<"Enter down payment in rupees: ";
		cin>>dPayment;
		
		if(cin.fail())
		{
			cout<<"Invalid\aInput"<<endl<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		
		else
		break;
		
	}while(true);
	
	do
	{
		cout<<"For how many months, do you want to lease the car  (1-60): ";
		cin>>installMonths;
		
		if(installMonths<1 || installMonths>60)
		{
			cout<<"Invalid\aInput"<<endl<<endl;
			continue;
		}
		
		else
		break;
		
	}while(true);
	
	payable= vPrice-dPayment;
	
	if(installMonths<=12)
	{
		payable += (10.0/100.0)*payable;
	}
	
	else if(installMonths>12 && installMonths<=24)
	{
		payable += (15.0/100.0)*payable;
	}
	
	else if(installMonths>24 && installMonths<=36)
	{
		payable += (20.0/100.0)*payable;
	}
	
	else if(installMonths>36 && installMonths<=48)
	{
		payable += (25.0/100.0)*payable;
	}
	
	else if(installMonths>48 && installMonths<=60)
	{
		payable += (30.0/100.0)*payable;
	}
	
	else
	{
		cout<<"invalid input for months "<<endl;
		return 0;
	}
	
	
	monthly= payable/installMonths;
	
	cout<<"Monthly istallment: "<<monthly<<endl;
	
	
	
	return 0;
}
