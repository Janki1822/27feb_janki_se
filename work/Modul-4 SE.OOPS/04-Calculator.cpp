//WAP to make simple calculator using class.
#include<iostream>
using namespace std;
class calculator
{
	public:
		int no1,no2;
		int getdata() // getdata use for passed msg input.
		{
			cout<<"Enter the value of no1";
			cin>>no1;  // pass the msg to print value.
			cout<<"Enter the value of no2";
			cin>>no2;
			return 0;
		}

public:
int showdata() // Showdata use for get value print
	{
		cout<<"\nAddition is:"<<no1 + no2;             // Addition of the no1 & no2.
		cout<<"\nSubtraction is:"<<no1 - no2;		   // Subtraction of the no1 & no2.
		cout<<"\nMultiplication is:"<<no1 * no2;       // multiplication of the no1 & no2.
		cout<<"\nDivision is:"<<(float)no1 / (float)no2; // float use for get pointer (ex:- 5/2= 2.5) value in Division.
		cout<<"\nModulo is:"<<no1 % no2;               // Modulo of the no1 & no2.
		return 0;
 	}
};
int main() // Used for print the uper calculator value and take proper output.
{
	calculator cal; // for the proper class output need to make obj, for getdata and showdata.
	cal.getdata();
	cal.showdata();
	return 0;
}
