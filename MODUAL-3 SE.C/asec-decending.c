//WAP to take two Array input from user and sort them in asending or decending order as per user's choice.
#include<stdio.h>
int main()
{
	/*
	Asending numbers -> 2 1 4 5 3  ---> in Asending case in will arrang in lower to higher number 1
	2 3 4 5
	*/
	int a[5],i,j,temp;
	printf("enter the Array value");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);//2 3 4 5 1
	}
	for(i = 0; i < 5; i++)
	{
	    for(j = i+1; j < 5; j++)
		{
			if(a[i]>a[j])// in desending order remove grethan and add less than condition 
			{
				temp  = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("array value:);
	for(i = 0; i < 5; i++)
	{
		printf("%d",a[i]);
	}

	return 0;
}
