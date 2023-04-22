//WAP to print fibonacci series up to given numbers.
#include<stdio.h>
void fibonacci(int num) // find fibonacci series any number
{
	int j = 0, k = 1, p; 
	while (j <= num)//using while loop 
	{
		printf("%d ", j);// Print variable for j = 0 value less than 1
		p = j + k;// value++ like 0 1 1 2.......
		j = k;
		k = p;
	}
}
int main()
{
	int num;// Print the value and series..
	
	printf("enter the number:" );
	scanf("%d", &num);
	
	printf("\nThe fibonacci number series is:");
	
	fibonacci(num);
	
	 return 0;
}
