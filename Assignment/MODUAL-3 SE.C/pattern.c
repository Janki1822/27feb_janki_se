//WAp to make pattern.
#include<stdio.h>
int main()
{
	//int i, j,c = 1,k;
	char i,j/*c= 'A'*/;
	
	/*
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	*/
	
	/*for(i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", i);
			
		}
		printf("\n");
	}*/	
	/*for(i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", c);
			c++;
			
		}
		printf("\n");
	}*/
	
	//Star tringle pattern(*).
	
	/*for (i = 1; i <= 6; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i = 1; i <= 5; i++)
	{
		for(j = 5; j >= i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}*/
	
	// Star pyramid pattern(*).
	
	/*for(i = 1; i <= 5; i++)
	{
		for(j = 5; j > i; j--)
		{
			printf(" ");
		}
     	for(k = 1; k <= 2*i-1; k++)
    	{
		printf("*");
	    }
	printf("\n");
	}*/
	
	//ABCD pattern.
	/*for (i = 'A'; i <= 'E'; i++)
	{
		for(j = 'A'; j <= i; j++)
		{
			printf("%c ", c);
			c++;
		}
		printf("\n");
	}*/
	/* ABCD pattern
	for (i = 'A'; i <= 'E'; i++)
	{
		for(j = 'A'; j <= i; j++)
		{
			printf("%c ", j);
			
		}
		printf("\n");
	}*/
	
	/*
	10
	101
	1010
	10101
	*/
	for(i = 0; i <= 5; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%d ",(i+j)%2);
		}
		printf("\n");
	}
	return 0;
}
