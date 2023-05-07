// WAP to sum of odd numbers.
#include<stdio.h>
int main()
{
	//Odd number are 1,3,,5,7,9.......
	int i,j, sum = 0;
	
	//pass the msg to take user's input
	printf("enter the numbers.");
	scanf("%d", &i);
	
	//take the value of variable to take value form user's using while loop
	j = 0;
	while (j<=i)
	{
		if(i%2!=0) // This condition apply base on divisible by 2 or not equal to 0 
		{
			printf("%d", j); // Print the msg 
			sum = sum + j; // Odd number summation
		}
		j++;
	}
	printf("\nSum of odd num is:%d", sum);
	
	return 0;
}
