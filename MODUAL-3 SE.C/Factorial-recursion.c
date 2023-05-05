//WAP to find factorial using recursion
#include<stdio.h>
int facto(int num)
{
	if(num <= 1)
	{
		return 1;
	}
	return num * facto(num - 1);// recursion function
}

int main()
{
	int num;
	
	printf("\nFactorial is:%d", facto(5));
	
	return 0;
}
