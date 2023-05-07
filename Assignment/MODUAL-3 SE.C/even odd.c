//WAP to find number is even or odd using ternary opereter.
#include<stdio.h> 
int main()
{
	// Even num : 2,4,6,8.......
	// Odd num : 1,3,5,7,9......
	
	int num;// Take the variable 
	
	printf("Enter the value of num");
	scanf("%d", &num);
	
	/*
	Using ternary condition : (condition) ? (true) : (false);
	'?' is use to check the condition
	*/
	//here num divisible by 2 = 0 value , and print the value to check even or odd num. 
	(num % 2 == 0) ? (printf("\neven num is:%d", num)) : (printf("\nodd num is:%d", num));
	
	return 0;
}
