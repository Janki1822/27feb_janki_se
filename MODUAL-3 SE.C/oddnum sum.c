// WAP to sum of odd numbers.
#include<stdio.h>
int main()
{
	int i,j, sum = 0;
	printf("enter the numbers.");
	scanf("%d", &i);
	
	j = 0;
	while (j<=i)
	{
		if(i%2!=0)
		{
			printf("%d", j);
			sum = sum + j;
		}
		j++;
	}
	printf("\nSum of odd num is:%d", sum);
	
	return 0;
}
