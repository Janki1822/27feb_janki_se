//WAP to take even and odd using if-else.
#include<stdio.h>
int main()
{
	int no;
	 
	// Take user's input to check even and odd
	printf("enter the value of no");
	scanf("%d", &no);
	
	//It is true when num devisible by 2
	
	if(no %2 == 0)
	{
		printf("%d is even", no);
	}
	else
	printf("\n%d is odd",no);
	
	return 0;
}
