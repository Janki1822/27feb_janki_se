#include<iostream>
using namespace std; // 
class cal // Define class as a cal.
{
	public :
		int no1, no2;
		
		cal () //Define class cal
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
			cout<<"\nDivision is:"<<(float)no1/ (float)no2<<endl;// For the division here I use float type value.
		}
};
int main()
{
	Add a1; // Object of class Addition.

	Sub s1; // Object of class Subtraction.

	Multi m1; //Object of class Multiplication.

	Div d1; // Object of class Division.

	
	return 0;
}


