//WAP you have to make a summation of first and last digit.
#include<stdio.h>
int main()
{
	int j, sum = 0 , ld;
	printf("Enter the number:");
	scanf("%d", &j);
	
	ld = j %10;//Find to last digit of numbers
	
	while (j > 9)// find the firdt digit  by divisible j by 10.
	{
		j = j / 10;
	}
	sum = j - ld;// sum =0 greter than = to 9, ans given in minus value.
	
	printf("\nSum of first and last digit=%d", sum);// print thr value of 1st & last digit summation.
	
	
	return 0;
}
