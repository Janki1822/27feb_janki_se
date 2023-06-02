// WAP to swap the two numbers using friend function without using third variable.
#include<iostream>
using namespace std;
class Friend
{
	private:
		int no;
		
		public:
			friend int data(Friend &frnd, int n);
};
int data(Friend &frnd, int n)
{
	frnd.no = n;
	cout<<"Friend number : "<<frnd.no<<endl;
	return 0;
}
int main()
{
	Friend obj;
	data(obj,12);
	return 0;
}
