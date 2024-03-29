#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	 cout<<"************************************************************************************************************************"<<endl;
     cout<<"\t\t\t\t\t\t**GAME**\n"<<endl;
     cout<<"************************************************************************************************************************"<<endl;

     cout<<"\t\t\t\t:) GUESS MY NUMBER: A fun game of guessing :)\n"<<endl;
	srand(time(0));
	int number = rand() % 100 + 1;
	int guess = 0;
	
	//used do-while loop
	do{
		cout<<"\n\t\t\t\t\tEnter Guess (1-100): "<<endl;
	    cin>>guess;
		
		if(guess > number)
		
		  cout<<"\t\t\t\t\tGues lower!"<<endl;
		else if(number < number)
		  cout<<"\t\t\t\t\tGuess higher!"<<endl;
		else
		  cout<<"\t\t\t\t\tYou Won..."<<endl;	
		  
       
	}while(guess != number);
} 
