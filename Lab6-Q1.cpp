/*
Write functions in C++ language for calculating the area and perimeter
 of a square, circle and rectangle. Use these functions in a C++ program
  which takes a character input (‘s’ for square, ‘c’ for circle and ‘r’ for
 rectangle) from user and displays the area and perimeter of the corresponding 
 shape. Your program should prompt the user to enter lengths of sides based on the
  specific character entered by user. Your program should have the following interface. 
 
Enter the first letter of the shape : S 
	 	Enter the length of its sides in cms : 5 
Area of this square is 25 sq.cms 
	 	Perimeter of this square is 20 cms  
*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<limits>
#include<conio.h>

using namespace std;

float circleArea(float r)
{
	return (3.14*r*r);
}

float squareArea(float l)
{
	return l*l;
}

float rectangleArea(float l , float w)
{
	return l*w;
}

float circlePerimetre(float r)
{
	return 2.0*3.14*r;
}

float squarePerimetre(float l)
{
	return 4*l;
}

float rectanglePerimetre(float l , float w)
{
	return 2*(l+w);
}



int main()
{
	char ch;
	float l , w , r , area , perimetre;
	
	label:
		
	cout<<"-----------------"<<endl;
	cout<<"Press a chracter: "<<endl;
	cout<<"s for square"<<endl;
	cout<<"r for rectangle"<<endl;
	cout<<"c for circle"<<endl;
	cout<<"-------------"<<endl<<endl;
	
	ch=getch();
	
	switch(ch)
	{
		case 's':
			
				do
				{
					cout<<"Enter length of Square: ";
					cin>>l;
					
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
			
			area=squareArea(l);
			
			perimetre=squarePerimetre(l);
			
			break;
			
		case 'r':
			
				do
				{
					cout<<"Enter length of rectangle: ";
					cin>>l;
					
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
					cout<<"Enter width of rectangle: ";
					cin>>w;
					
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
			
			area=rectangleArea(l , w);
			
			perimetre=rectanglePerimetre(l , w);
			
			break;
			
		case 'c':
			
				do
				{
					cout<<"Enter radius of circle: ";
					cin>>r;
					
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
			
			area=circleArea(r);
			
			perimetre=circlePerimetre(r);
			
			break;
			
		default:
			
			system("cls");
			cout<<"invalid \ainput , try again"<<endl<<endl;
			goto label;
					
	}
	
	cout<<"Its area is "<<area<<endl;
	cout<<"Its perimetre is "<<perimetre<<endl;
	
	return 0;
}