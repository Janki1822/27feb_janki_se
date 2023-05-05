//WAP to make addition, Subtraction and multiplication of two matrix using 2-D array.
#include<stdio.h>
int main()
{
	int a
	[3][3],b[3][3],c[3][3],i,j;
	printf("Enter the matrix value a");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the matrix of value b");
	for(i = 0; i < 3; i++)
	{
	    for(j = 0; j < 3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Enter the matrix of value a");
    for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			c[i][j]=a[i][j]+b[i][j];//addition matrix of value
			c[i][j]=a[i][j]-b[i][j];//subtraction of matrix value
			c[i][j]=a[i][j]*b[i][j];//multiplication of matrix value
		}
	}
	printf("\nMatrix c is:");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d", c[i][j]);// output store in c
		}
		printf("\n");
	}
	
	return 0;
}
