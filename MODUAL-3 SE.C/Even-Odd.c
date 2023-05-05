//WAP to find how many even numbers or how many odd numbers are....

#include<stdio.h> 
int main()
{
	// Even num : 2,4,6,8.......
	// Odd num : 1,3,5,7,9,11,13............
	int num;// Take the variable 
	
	printf("Enter the value of num");
	scanf("%d", &num);
	
	// it is true when number is devisible by 2
	
	if (num % 2 == 0)
	{
		printf("%d is even", num);// If number are print with divisible by 2. that is even numbers. 
	}
	else
	printf("\n%d is odd", num);// If number aren't print with divisible by 2. That is odd numbers.
	
	return 0;
}
