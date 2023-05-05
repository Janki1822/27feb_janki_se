//WAP to reverse a string and check that the string is palindrome or not.
#include<stdio.h>
int main()
{
	//121 -----> 121 reverse order same in palidrom number
	int j,k,p,s =0,c;
	printf("enter the number");
	scanf("%d", &j);
	
	k=j;
	while(j>0)
	{
		p = j%10;
		s = p+(s*10);
		j = j/10;
	}
	if(c==s)
	{
		printf("\nPalidrom number:");
	}
	else
	printf("not:");
	
	return 0;
}
