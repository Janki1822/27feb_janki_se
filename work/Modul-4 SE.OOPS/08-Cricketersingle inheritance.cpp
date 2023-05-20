//
#include<iostream>
using namespace std;
class Cricketer
{
	public:
		int  average,performance;
		float runs,match;
		char name[20];
		int getdata()
		{
			cout<<endl<<"Enter the batsman name:"; 
			cin>>name;
			cout<<endl<<"Enter the Total Runs:";
			cin>>runs;
			cout<<endl<<"Enter the Average runs:";
			cin>>average;
			cout<<endl<<"Enter the Match:";
			cin>>match;
			cout<<endl<<"Enter the Best performance:";
			cin>>performance;
		};
};
class Batsman : public Cricketer
{
	public:
		int display()
		{
			
			cout<<endl<<"Batsman name is:"<<name;
			cout<<endl<<"_____________________\n";
			cout<<endl<<"Total runs:"<<runs;
			cout<<endl<<"Best Performance match:"<<performance;
			
			return 0;
		}
		public:
			int average()
			{
				int  average;
				float averuns,match;
				
				cout<<endl<<"Enter the total runs";
				cin>>runs;
				cout<<endl<<"Enter the total match:";
				cin>>match;
				
				cout<<endl<<"total average:"<<(float)averuns / (float)match;
				
			}
};
int main()
{

	Batsman bt;
	bt.getdata();
	bt.average();
	bt.display();
	
	return 0;
}
