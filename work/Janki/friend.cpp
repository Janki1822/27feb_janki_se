#include<iostream>
using namespace std;
class swap
{
	int a,b;
	public:
   		swap()
		{
			a=b;
			b=a;
		}
		friend int data(swap &frnd, int s1);
};
int swap(swap &frnd, int s1);
{
	frnd.s1 = s1.a;
	s1.a = s1.b;
	s1.b = s1.a;
	cout<<endl<"Swap the number is:"<<s1.a<<s1.b;
}
int main()
{
	swap s(4,6);
	swap(s);
	return 0;
}
