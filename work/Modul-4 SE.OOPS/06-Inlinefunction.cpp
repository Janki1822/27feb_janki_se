//WAP to find the multiplication value and the cubic value using inline function. 

#include<iostream>
using namespace std;// Using for standerd output.
class cube // class define as a cube.

{
	public:
		int r;  //variable for store the value.
		
		//Inline function use for find multiplication value and cubic value from the ans.
		// Inline funcion also used for all the commands in one coloumn and row. 
		inline int cdata(int r){return r*r*r;}
};
int main()
{
	// Veriable for the store value.
	int j, num1,num2;
	cube c1; // Object for the getdata to show value.
	cout<<endl<<"Enter the number 1 is:";
	cin>>num1;
	cout<<endl<<"Enter the number 2 is:";
	cin>>num2;
	
	j=num1*num2;// Multiplication of two number for get cubic value
	
	cout<<"\nMultiplication of num1 and num2:"<<num1*num2<<endl;//To store the multiplication value.

	cout<<"\nThe cubic value of number "<<j<<" is:"<<c1.cdata(j); // print the multiplication value and get the cubic value 
	return 0;
	
}
