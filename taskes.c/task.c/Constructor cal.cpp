#include<iostream>
using namespace std;
class cal
{
	public :
		int no1, no2, choice;
		
		cal ()
		{
			cout<<"\n1.Addition\n2.Substraction\n3.multiplication\n4.Division";
			cout<<"\nEnter your choice:";
			cin>>choice;
			cout<<"\nvalue of no1 :";
			cin>>no1;
			cout<<"Value of the no2:";
			cin>>no2;
		}
};
class A : public cal
{
	public:
		A()
		{
			cout<<"\nAddition is :"<<no1+no2;
		}
};
class B : public cal
{
	public:
		B()
		{
			cout<<"\nSubtraction is:"<<no1-no2;
		}
};
class C : public cal
{
	public:
		C()
		{
			cout<<"\nMultiplication is:"<<no1*no2;
		}
};
class D : public cal
{
	public:
		D()
		{
			cout<<"\nDivision is:"<<(float)no1/ (float)no2;
		}
};
int main()
{
	int ch = 1;
   	switch (ch)
	{
		case 1:
			 A A1;
			break;	
	}
	switch (ch)
	{
		case 1:
			 B B1;
			break;	
	}
	switch (ch)
	{
		case 1:
			 C C1;
			break;	
	}
	switch (ch)
	{
		case 1:
			 D D1;
			break;	
	}
	
	return 0;
}


