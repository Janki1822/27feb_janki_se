//Define a class to represent a Bank Account. Include the following members.

1. Data Member:
	
	- Name of the depositer							
	- Account Number					            
	- Type of the account
	- Balance amount in the account
____________________________________________________	
2. Member Function:
	
	- To assign values
	- To deposite amount
	- To withdrawl an amount after checking balance
	- To display name and balance
____________________________________________________	
	 
#include<iostream>
using namespace std;
class Bank // define class as a bank
{
	public:
		int acno,bal; // Variable for store the value
		char name[20], type[20];
		int getdata() // To get account detail and print the bank detail.
		{
			cout<<endl<<"Enter Name of the Depositer:";
			cin>>name;
			cout<<endl<<"Enter the Account number:";
			cin>>acno;
			cout<<endl<<"Enter the Type of Account:";
			cin>>type;
			cout<<endl<<"Enter the Balancce amount in the account:";
			cin>>bal;

			return 0;
		}
		
		public:
			 
			int Balance() // To define for deposite amount and withdrawl  
			{
				int depo,widr;
				cout<<"\nEnter the Deposite amount:";// pass the msg for output.
				cin>>depo;
				bal += depo;						// To Add more money in the account. 
				
				cout<<"\nEnter the Withdrawl amount:";// Pass the msg for output
				cin>>widr;
				bal -= widr;						// For withdrawing an amount in the account. 
				return 0;
			}
		public:
			int display()// To display the all detail for depositer Bank Account.
			{
				cout<<"\n______________________";
				cout<<"\nBank details:\n";
				cout<<"______________________";
				cout<<"\nAccount number:"<<acno;
				cout<<"\nName of the Depositer:"<<name;
				cout<<"\nType of the account:"<<type;
				cout<<"\nBalance amount in the account:"<<bal;
				return 0;
			}
};
int main()
{
	Bank b1;// Creat an object for output
	b1.getdata();// For the print msg
	b1.Balance();// For the balance output
	b1.display();// display to all detail.
	return 0;
}
