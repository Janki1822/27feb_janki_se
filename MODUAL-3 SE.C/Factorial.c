//WAP to print factorial of given number.
#include<stdio.h>
int facto(int no) // Take the function and variable in recursion function.
{
	if (no <= 1) // Find the factorial number value used by if.
	{
		return 1; 
	}
	return no * facto(no - 1);
}
int main()
{
	printf("\nfactorial no 8 is:%d",facto(8));
	return 0;
}
