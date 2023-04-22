//WAP to print number in revers order 
#include<stdio.h>
int main()
{
	// Print the number is 25635 - reverse 53652.
	int j, r = 0, num;
	
	printf("Enter the number");
	scanf("%d", &j);
	
	while (j != 0)// j not equal to 0 that show the condition true or false.
	{
		num = j % 10;
		r = r* 10 + num;// Add the revese formula for take the value.
		j/=10;
	}
	
	printf("Reverse number is = %d", r);// Print the reverse value.
	
	return 0;
}
