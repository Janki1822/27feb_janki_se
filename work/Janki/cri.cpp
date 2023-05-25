#include<iostream>
using namespace std;
class Cricketer
{
	public:
		int performance;
		char name[20],country[20];
		int getdata()
		{
			cout<<endl<<"Enter the batsman name:"; 
			cin>>name;
			cout<<endl<<"Enter a batsman belong from:";
			cin>>country;
			cout<<endl<<"Enter the Best performance:";
			cin>>performance;
		
			return 0;
		};
};
class Batsman : public Cricketer
{
	public:
			int display()
			{
				  
				float average,runs,match;
				
				cout<<endl<<"Enter the total runs";
				cin>>runs;
				cout<<endl<<"Enter the total match:";
				cin>>match;
				
				average = (float)runs/ (float)match;
				
				cout<<endl<<"_____________________\n";
				cout<<endl<<"Batsman name is:"<<name;
				cout<<endl<<"Batsman belong from:"<<country;
				cout<<endl<<"Virat's total runs Average is:"<<average;
				
				return 0;
			}
};

int main()
{

	Batsman bt;
	bt.getdata();
	bt.display();
	
	return 0;
}
