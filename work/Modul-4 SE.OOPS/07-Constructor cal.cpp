#include<iostream>
using namespace std;
class cal // Define class as a cal.
{
	public :
		int no1, no2;
		
		cal ()//Difine class cal
		{
			cout<<"\nvalue of no1 :";
			cin>>no1;
			cout<<"Value of the no2:";
			cin>>no2;
		}
};
class Add: public cal // For the Addition of 2 number value
{
	public:
		Add()
		{
			cout<<"\nAddition is :"<<no1+no2<<endl;
		}
};
class Sub : public cal //For the subtraction of 2 number value
{
	public:
		Sub()
		{
			cout<<"\nSubtraction is:"<<no1-no2<<endl;
		}
};
class Multi : public cal//For the Multiplication of 2 number value
{
	public:
		Multi()
		{
			cout<<"\nMultiplication is:"<<no1*no2<<endl;
		}
};
class Div : public cal//For the Division of 2 number value
{
	public:
		Div()
		{
			cout<<"\nDivision is:"<<(float)no1/ (float)no2<<endl;// For the division value here use float type..
		}
};
int main()
{
	int ch = 1;// variable for store the value and run the program
   	switch (ch) // Get value using switch case output
	{
		case 1:
			 Add a1; // Value of addition with object
			break;	
	}
	
	switch (ch)
	{
		case 1:
			 Sub s1;
			break;	
	}
	
	switch (ch)
	{
		case 1:
			 Multi m1;
			break;	
	}
	
	switch (ch)
	{
		case 1:
			 Div d1;
			break;	
	}
	
	return 0;
}


