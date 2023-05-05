//WAP to swap two numbers without using third variable. 
#include<stdio.h>
int main()
{
	// Take two variable
	int j,k;
	/*
	// take the two variable value
	  j = 10;
	  k = 20;
	*/  
	
	//Pass the msg to take user's input
	printf("enter the two numbers");
	scanf("%d%d", &j, &k);

    //Using condition statement to swap two number 
	j = j + k;// j = 10 + 20 = 30  
	k = j - k;// k = 30 - 20 = 10
	j = j - k;// j = 30 - 10 = 20
	
	//Print the swap number value
	printf("j = %d k = %d", j,k);
	
	return 0;
}
