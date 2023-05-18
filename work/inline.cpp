// WAP to find the multiplication value and the cubic value using inline function.
#include<iostream>
using namespace std;
class cube
{
	public:
		int r; // variable for store the value
		inline  int cubedata(int r){return r*r*r;}// Inline function used in type the data in one line.
};
int main()
{
	// Print the 
	int j;
	cube c1;
	cout<<"enter the cubic number is:";
	cin>>j;
	cout<<"the cubic value "<<j<<" is:"<<c1.cubedata(j);	
}
