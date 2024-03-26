                              //***Simple Calulator Program***//
#include<iostream>
using namespace std;
int main()
{
	double a,b;
	char operation;
	 cout<<"**Simple Calculator**"<<endl<<endl;

	//Enter two numbers	
	cout<<"Enter 1 number: "<<endl;
	cin>>a;
	cout<<"Enter 2 number: "<<endl;
	cin>>b;
	
	//select operation
	cout<<"Select The operation: + , - , / , % "<<endl;
    cin>>operation;
	//used switch statement
	switch(operation)
	{
		case '+':
		   	 cout<<"Answer: "<<a+b<<endl;
		     cout<<"  *---*"<<endl;
		     break;
		case '-':
			cout<<"Answer: "<<a-b<<endl;
		    cout<<"  *---*"<<endl;
	     	break;
		case '*':
			cout<<"Answer: "<<a*b<<endl;
		    cout<<"  *---*"<<endl;
		    break;
		case '/':
			cout<<"Answer: "<<a/b<<endl;
		    cout<<"  *---*"<<endl;
		default:
			cout<<"Invalid operation!"<<endl;
			cout<<"  *---*"<<endl;
	}
	    return 0;
}
