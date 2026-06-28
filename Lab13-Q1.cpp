/*
POST-Lab Task # 13.1 
Do Tasks 13.1 and 13.2 using pointers to structures. Your program
 should implement the operations to modify existing records, delete 
 existing records, add new records, sort and print the existing records
  with respect to Author’s Name in alphabetical order, sort and print the
   existing records with respect to Year of Publishing in descending order,
    sort and print the existing records with respect to Price in ascending order.
	 You have to populate records for at least 15 books and demonstrate that your program works correctly. 

*/


#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>

using namespace std;

struct Library;

static int sr=0;

struct Book
{
	int num;
	string name;
	string author;
	int edition;
	int publish;
	int price;
	
	void display()
	{
		
			cout<<++sr<<"----"<<num<<"--"<<name<<"--"<<author<<"--"<<edition<<"--"<<publish<<"--"<<price<<endl;
		
	}
	
	
};

struct Library
{
	Book* books= new Book[100];
	int capacity=100;
	int size=0;
	
	void add()
	{
		
		cout<<"Enter library number: ";
		cin>>books[size].num;
		
		cin.ignore();
		
		cout<<"Enter name of book: ";
		getline(cin , books[size].name);
		
		cout<<"Enter author's name: ";
		getline(cin , books[size].author);
		
		cout<<"Enter edition number: ";
		cin>>books[size].edition;
		
		cout<<"Enter publishing date: ";
		cin>>books[size].publish;
		
		cout<<"Enter price: ";
		cin>>books[size].price;
		
		cin.ignore();
		
		size++;
	}
	
	void sort()
	{
		char choice;
		
		cout<<"Press..."<<endl;
		cout<<"1 for sort by price from high to low"<<endl;
		cout<<"2 for sort by authors name in alphabetical order"<<endl;
		cout<<"3 for sort by publishing year form latest to oldest"<<endl;
		
		choice=getch();
		
		switch(choice)
		{
			case '1':
				for(int j=0 ; j<size ; j++)
				{
					for(int i=0 ; i<size-1 ; i++)
					{
						if(books[i].price>books[i+1].price)
						{
							Book temp=books[i];
							books[i]=books[i+1];
							books[i+1]=temp;
						}
					}
		
				}
				

				break;
				
			case '2':
				for(int j=0 ; j<size ; j++)
				{
					for(int i=0 ; i<size-1 ; i++)
					{
						if(books[i].author[0]>books[i+1].author[0])
						{
							Book temp=books[i];
							books[i]=books[i+1];
							books[i+1]=temp;
						}
					}
		
				}
				
				break;
				
			case '3':
				for(int j=0 ; j<size ; j++)
				{
					for(int i=0 ; i<size-1 ; i++)
					{
						if(books[i].publish<books[i+1].publish)
						{
							Book temp=books[i];
							books[i]=books[i+1];
							books[i+1]=temp;
						}
					}
		
				}
				
				break;
				
			default:
				cout<<"Invalid \a input"<<endl;
				
		}
		
			cout<<"Here are the sorted results..."<<endl<<endl;
				cout<<"sr----"<<"name----"<<"author-----"<<"Edition------"<<"Year--------"<<"price"<<endl<<endl;
				
				for(int i=0 ; i<size ; i++)
				{
					books[i].display();
				}
				
				cout<<endl;
				
				sr=0;
		
	}
	
	void search()
	{
		char choice;
		int num , publish , edition , price , count=0;
		string name , author ;
		
		cout<<"press..."<<endl;
		cout<<"1 for searching by Library number"<<endl;
		cout<<"2 for searching by Book name"<<endl;
		cout<<"3 for searching by Authors name"<<endl;
		cout<<"4 for searching by Edition number"<<endl;
		cout<<"5 for searching by publishing date"<<endl;
		cout<<"6 for searching by price"<<endl<<endl;
		
		choice=getch();
		
		switch(choice)
		{
			
			case '1':
				
				
				cout<<"Enter Library number: ";
				cin>>num;
				cin.ignore();
				
				for(int i=0 ; i<size ; i++)
				{
					if(num==books[i].num)
					{
						cout<<"Here is what we found......."<<endl;
						books[i].display();
						count++;
					}
				}
				
				sr=0;
				
				if(count==0)
				{
					cout<<"No match found"<<endl;
				}
				
				break;
				
			
			case '2':
				
				
				cout<<"Enter Book name: ";
				getline(cin , name);
				
				for(int i=0 ; i<size ; i++)
				{
					if(name==books[i].name)
					{
						cout<<"Here is what we found......."<<endl;
						books[i].display();
						count++;
					}
				}
				
				sr=0;
				
				if(count==0)
				{
					cout<<"No match found"<<endl;
				}
				
				break;
				
				
			case '3':
				
				
				cout<<"Enter Authors name: ";
				getline(cin , author);
				
				for(int i=0 ; i<size ; i++)
				{
					if(author==books[i].author)
					{
						cout<<"Here is what we found......."<<endl;
						books[i].display();
						count++;
					}
				}
				
				sr=0;
				
				if(count==0)
				{
					cout<<"No match found"<<endl;
				}
				
				break;
				
				
			case '4':
				
				
				cout<<"Enter Edition number: ";
				cin>>edition;
				cin.ignore();
				
				for(int i=0 ; i<size ; i++)
				{
					if(edition==books[i].edition)
					{
						cout<<"Here is what we found......."<<endl;
						books[i].display();
						count++;
					}
				}
				
				sr=0;
				
				if(count==0)
				{
					cout<<"No match found"<<endl;
				}
				
				break;
				
				
			case '5':
				
				
				cout<<"Enter publishing year: ";
				cin>>publish;
				cin.ignore();
				
				for(int i=0 ; i<size ; i++)
				{
					if(publish==books[i].publish)
					{
						cout<<"Here is what we found......."<<endl;
						books[i].display();
						count++;
					}
				}
				
				sr=0;
				
				if(count==0)
				{
					cout<<"No match found"<<endl;
				}
				
				break;
				
				
			case '6':
				
				
				cout<<"Enter Desired Price: ";
				cin>>price;
				cin.ignore();
				
				for(int i=0 ; i<size ; i++)
				{
					if(price==books[i].price)
					{
						cout<<"Here is what we found......."<<endl;
						books[i].display();
						count++;
					}
				}
				
				sr=0;
				
				if(count==0)
				{
					cout<<"No match found"<<endl;
				}
				
				break;
				
			default:
				cout<<"invalid \a input"<<endl;
			
		}
	}
	
	void del()
	{
		int srNum;
		
		cout<<"sr----"<<"name----"<<"author-----"<<"Edition------"<<"Year--------"<<"price"<<endl<<endl;
		
		for(int i=0 ; i<size ; i++)
		{
			books[i].display();
		}
		
		sr=0;
		
		cout<<"Enter sr number of record you wanna delete...."<<endl;
		cin>>srNum;
		
		for(int i=srNum ; i<size ; i++)
		{
			books[i-1]=books[i];
		}
		
		size--;
		
		cout<<"Record Deleted"<<endl;
		cout<<"Here is the modified record"<<endl<<endl;
		
		cout<<"sr----"<<"name----"<<"author-----"<<"Edition------"<<"Year--------"<<"price"<<endl<<endl;
		
		for(int i=0 ; i<size ; i++)
		{
			books[i].display();
		}
	}
};

int main()
{
	Library lib;
	
	char choice , stay;
	
	cout<<"---------------------------"<<endl;
	cout<<"Library Management System"<<endl;
	cout<<"---------------------------"<<endl<<endl;
	
	do
	{
		
		cout<<"Press.......your choice"<<endl;
	
	cout<<"1.  Add"<<endl;
	cout<<"2.  Delete"<<endl;
	cout<<"3.  Sort"<<endl;
	cout<<"4.  Search"<<endl;
	cout<<"5.  Display"<<endl<<endl;
	
	choice=getch();
	
	
	switch(choice)
	{
		case '1':
			
			lib.add();
			
			break;
			
		case '2':
			
			lib.del();
			
			break;
			
		case '3':
			
			lib.sort();
			
			break;
			
		case '4':
			
			lib.search();
			
			break;
			
		case '5':
			
			cout<<"sr----"<<"name----"<<"author-----"<<"Edition------"<<"Year--------"<<"price"<<endl<<endl;
			
			for(int i=0 ; i<lib.size ; i++)
			{
				lib.books[i].display();
			}
			
			sr=0;
			cout<<endl;
			
			break;	
		
	}
	
	cout<<"Press any key other than n to keep using: "<<endl;
	stay=getch();
		
	}while(stay!='n' && stay!='N');
	
	
	
	return 0;
}