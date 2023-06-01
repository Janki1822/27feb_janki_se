//WAP to swap the two value using Template.

#include<iostream>
using namespace std;
template <class T> //Use Function Template 
int sn(T&a,T&b) // take variable for output
{
	T t; // Take the T class name for swap the value.
	t = a;
	a = b;
	b = t;
	return 0;
}
int main()
{
	int j,k; // Take two variable for swap the number.
	j = 30, k= 10; // give the value of two variable .
	sn (j,k); // Call the swap number
	cout<<endl<<j; // get output to print the value
	cout<<endl<<k;
	return 0;
}
