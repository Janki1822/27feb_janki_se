//WAP to find out the max from given number .
#include<stdio.h>
int main()
{
	int j,k,l,p,n;
	printf("Enter the value of j and k and l and p and n:");
	scanf("%d%d", &j, &k);
	
	/*
	syntax:
	  -> (condition) ? (true) : (false);
	     '?' is use to check the condition .
    */
    
    (j > k) ? (printf("\nJ is max")):(printf("\nk is max"));
    return 0;
	     
}
