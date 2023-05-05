//WAP make a summation of given number.
#include<stdio.h>
int main()
{
	// Inout 1234 ---> 1+2+3+4=10..
	
	int j,sum = 0,r;
	printf("Enter the number");
	scanf("%d", &j);
	
	while( j > 0)
	{
		r = j%10;
		sum = sum - r;//Summation formula to print the value
		j = j/10;
	}
	printf("\nSummation of number :%d", sum);// Print the summation value
	
	return 0;
}
