// TIC TAC TOE game


#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<conio.h>
#include<cctype>

using namespace std;

int winner=0;

void refresh(char board[][3])
{
	int num=49;
	
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			board[i][j]=(char)num;
			num++;
		}
	}
}

void print(char board[][3])
{
	system("cls");
	
	cout<<right<<setw(15)<<"TIC TAC TOE"<<endl;
	
	cout<<endl<<right<<setw(1)<<"-------------------"<<endl;
	
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout<<right<<setw(2)<<board[i][j]<<"  |  " ;
		}
		
		cout<<endl<<right<<setw(1)<<"-------------------"<<endl;
	}
	
	cout<<endl;
	
	cout<<"Player 1 ..... O                        Player 2 ..... X"<<endl<<endl;
} 

void amend(char board[][3] , char choice , char ch)
{
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			if(board[i][j]==choice)
			{
				board[i][j]=ch;
				
				return;
			}
		}
	}
}

bool check(char board[][3])
{
	if((board[0][0]=='O')&&(board[1][0]=='O')&&(board[2][0]=='O'))
	{
		winner=1;
		return false;
	}
	
	else if((board[0][0]=='X')&&(board[1][0]=='X')&&(board[2][0]=='X'))
	{
		winner=2;
		return false;
	}
	
	else if((board[0][0]=='O')&&(board[0][1]=='O')&&(board[0][2]=='O'))
	{
		winner=1;
		return false;
	}
	
	else if((board[0][0]=='X')&&(board[0][1]=='X')&&(board[0][2]=='X'))
	{
		winner=2;
		return false;
	}
	
	else if((board[0][2]=='O')&&(board[1][2]=='O')&&(board[2][2]=='O'))
	{
		winner=1;
		return false;
	}
	
	else if((board[0][2]=='X')&&(board[1][2]=='X')&&(board[2][2]=='X'))
	{
		winner=2;
		return false;
	}
	
	else if((board[2][0]=='O')&&(board[2][1]=='O')&&(board[2][2]=='O'))
	{
		winner=1;
		return false;
	}
	
	else if((board[2][0]=='X')&&(board[2][1]=='X')&&(board[2][2]=='X'))
	{
		winner=2;
		return false;
	}
	
	else if((board[0][0]=='O')&&(board[1][1]=='O')&&(board[2][2]=='O'))
	{
		winner=1;
		return false;
	}
	
	else if((board[0][0]=='X')&&(board[1][1]=='X')&&(board[2][2]=='X'))
	{
		winner=2;
		return false;
	}
	
	else if((board[0][2]=='O')&&(board[1][1]=='O')&&(board[2][0]=='O'))
	{
		winner=1;
		return false;
	}
	
	else if((board[0][2]=='X')&&(board[1][1]=='X')&&(board[2][0]=='X'))
	{
		winner=2;
		return false;
	}
	
	else if((board[1][0]=='O')&&(board[1][1]=='O')&&(board[1][2]=='O'))
	{
		winner=1;
		return false;
	}
	
	else if((board[1][0]=='X')&&(board[1][1]=='X')&&(board[1][2]=='X'))
	{
		winner=2;
		return false;
	}
	
	else if((board[0][1]=='O')&&(board[1][1]=='O')&&(board[2][1]=='O'))
	{
		winner=1;
		return false;
	}
	
	else if((board[0][1]=='X')&&(board[1][1]=='X')&&(board[2][1]=='X'))
	{
		winner=2;
		return false;
	}
	
	else
	{
		return true;
	}
}
int main()
{
	char board[3][3]{'1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};
	
	char choice1 , choice2 , stay='y';
	int count=0;
	bool game=true;
	
	while(stay!=toupper('n'))
	{
		cout<<"TIC TAC TOE"<<endl;
		print(board);
		count=0;
		
		do{
			cout<<"First player turn: ";
			choice1=getch();
			
			count++;
			
			amend(board , choice1 , 'O');
			
			print(board);
			
			game=check(board);
			
			if(count==9)
			{
				
				system("cls");
				
				cout<<"Game tied...."<<endl<<endl;
				
				refresh(board);
				
				goto label;	
				
			}
			
			
			
			if(game==false)
			{
				break;
			}
			
			cout<<"Second player turn: ";
			choice2=getch();
			
			count++;
			
			amend(board , choice2 , 'X');
			
			game=check(board);
			
			if(game==false)
			{
				break;
			}
			
			print(board);
			
		}while(true);
		
		system("cls");
		
		
		cout<<endl<<"----------------"<<endl;
		cout<<"GAME OVER";
		cout<<endl<<"----------------"<<endl<<endl;
		
		if(winner==1)
		{
			cout<<"Winner:  player 1 "<<endl<<endl;
		}
		
		else
		{
			 cout<<"Winner:  player 2 "<<endl<<endl;
		}
		
		label:
		
		
		cout<<"Press any key other than n/N to keep playing"<<endl<<endl;
		
		stay=getch();
		
		refresh(board);
		
		system("cls");
	
	}
	
	return 0;
}

