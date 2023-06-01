/*WAP to Mathematic operation like Addition, Subtraction, Multiplication, Division of two
  number using diffrent perameters and function overloading.*/

#include<iostream>
using namespace std;
class overloading // define with overloading function
{
	public:
		int add (int no1, int no2) // Addition of 2 number
		{
			return no1+no2; // Get direct value in return type
		}
	public:
		int sub(int no1,int no2) //Subtraction of 2 number 
		{
			return no1-no2;
		}
	public:
		int multi(int no1, int no2) //Multiplication of 2 number
		{
			return no1*no2;
		}	
	public:
		float div(int no1,int no2) //Division of 2 number using float type
		{
			return (float)no1/(float)no2;
		}	
 } ;
 int main()
 {
 	overloading over;
 	cout<<endl<<"Addition of 2 number is:"<<over.add(10,20);
 	cout<<endl<<"Subtraction of 2 number is:"<<over.sub(20,75);
 	cout<<endl<<"Multiplication of 2 number is:"<<over.multi(45,6);
 	cout<<endl<<"Division of 2 number is:"<<over.div((float)12,(float)5);
 }
