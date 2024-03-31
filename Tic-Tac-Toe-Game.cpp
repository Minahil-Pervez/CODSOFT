#include<iostream>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin(){
     if(square[1] == square[2] && square[2] == square[3])
	  {
          	return 1;
          	
	  }else if(square[4] == square[5] && square[5] == square[6])
	  {
          	return 1;
          	
	  }else if(square[7] == square[8] && square[8] == square[9])
	  {
          	return 1;
	  }else if(square[1] == square[4] && square[4] == square[7])
	  {
          	return 1;
          	
	  }else if(square[2] == square[5] && square[5] == square[8])
	  {
          	return 1;
          	
	  }else if(square[3] == square[6] && square[6] == square[9])
	  {
          	return 1;
          	
	  }else if(square[1] == square[5] && square[5] == square[9])
	  {
          	return 1;
          	
	  }else if(square[3] == square[5] && square[5] == square[7])
	  {
          	return 1;
          	
	  }else if(square[1] != '1' && square[2] != '2' && square[3] != '3' 
	         && square[4] != '4 '&& square[5] != '5' && square[6] != '6' 
	         && square[7] != '7' && square[8] != '8' && square[9] != '9')
	  {
          return 0;
	  }else
	  {
	  return -1;
	  }
}
void board()
{
	system("cls");
	cout<<"\t\t\t\t***********************************************"<<endl;
	cout<<"\n\t\t\t\t\t\tTic Tac Toe Game\n\n";
	cout<<"\t\t\t\t***********************************************"<<endl;

	cout<<endl;
	
	cout<<"\t\t\t\t\t    Player 1(x) - Player2(0) "<<endl<<endl;

	cout<<"\t\t\t\t\t\t _________________"<<endl;
	cout<<"\t\t\t\t\t\t|     |     |     |"<<endl;
	cout<<"\t\t\t\t\t\t| "<<square[1]<< "   |  " <<square[2]<< "  |  " <<square[3]<<"  |"<<endl;
	
	cout<<"\t\t\t\t\t\t|_____|_____|_____|"<<endl;
	cout<<"\t\t\t\t\t\t|     |     |     |"<<endl;
	
	cout<<"\t\t\t\t\t\t| "<<square[4]<< "   |  " <<square[5]<< "  |  " <<square[6]<<"  |"<<endl;
	
	cout<<"\t\t\t\t\t\t|_____|_____|_____|"<<endl;
	cout<<"\t\t\t\t\t\t|     |     |     |"<<endl;
	
	cout<<"\t\t\t\t\t\t| "<<square[7]<< "   |  " <<square[8]<< "  |  " <<square[9]<<"  |"<<endl;
	
	cout<<"\t\t\t\t\t\t|_____|_____|_____|"<<endl;

	
}
int main(){
	int player = 1,i,choice;
	char mark;
	do
	{
		board();
		player = (player%2)?1:2;
		
		cout<<"\n\t\t\t\t\t   Player "<<player	<<", Enter the number:";
		cin>>choice;
		
		mark=(player == 1)?'x' : '0';
		

        if(choice >=1 && choice <= 9 && square[choice] == choice +'0')
        {
        	square[choice] = mark;
		}
       else
       {
    	cout<<"\t\t\t\t\tINVALID MOVE!";
    	
    	player--;
    	cin.ignore();
    	cin.get();
   	  }
	   i = checkwin();
	   player++;
}
    while(i == -1);
       board();
    if( i == 1)
    {
	   cout<<"\n\a\t\t\t\t\tCONGRATULATIONS! PLAYER "<<--player << " WINS!";
    }else
    {
	   cout<<"\n\a\t\t\t\t\t\t    GAME DRAW!"<<endl;
    }
       cin.ignore();
       cin.get();
       return 0;
}
