//WAP to find the simple Interest 
#include<stdio.h>
int main()
{
	//Using float for pointer ans in calculation of program
	float p, r, t, si;//Take the variable
	
	//Pass the msg to take user's input
	printf("enter the value of Principle:");
	scanf("%f", &p);
	
	printf("enter the value of Rate:");
	scanf("%f", &r);
	
	printf("enter the value of Time:");
	scanf("%f", &t);
	
	//Enter the simple interest formula
	si = (p*r*t)/100;
	
	//Print the value of interest
	printf("\nThe Interest is:%f", si);
	
	return 0;
	
}
