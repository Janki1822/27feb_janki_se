// WAP to make simple calculator with Arithmatic porgram:
#include<stdio.h>
int main()
{
	int a, b; // Use varibale for Arithmatic program
	int ans; // To store the arithmatic answer
	float div; // To store the division ans in point.
	
	// Add the Addition, Subtracton, Division, Multiplication and Modulo in the program
	
	/* 
	+ - Addition
	- - Subtraction
	/ - Division
	* - Multiplication
	% - Modulo
	*/
	
	//Pass the msg to take the user's input for addition.
	
	printf("enter the value of a:");
	scanf("%d", &a); // Use to take the user's input
	
    printf("enter the value of b:");
    scanf("%d", &b);
    
    ans = a+b; // Addition of the two values.
    printf("\nadditioon of the a and b is:%d", ans); // take the user input. 
    
    // Pass the msg to take the user input for Subtraction.
    
	printf("enter the value of a:");
    scanf("%d", &a);
    
    printf("enter the value of b:");
    scanf("%d", &b);
    
    ans = a-b;
    printf("\nSubstraction of the a and b is:%d", ans);
    
    // pass the msg to take user input for Multiplication.
    
	printf("enter the value of a:");
    scanf("%d", &a);
    
    printf("enter the value of b:");
    scanf("%d", &b);
    
    ans = a*b;
    printf("\nMultiplication of the a and b is:%d", ans);
    
    // Pass the msg to take user input for Division.
    printf("enter the value of a:");
    scanf("%d", &a);
    
    printf("enter the value of b:");
    scanf("%d", &b);
    
    ans = a/b;
    printf("\nDivision of the a and b is:%d", ans);
    
    // float use in division for point answers.
    //explicite type conversation (int to float.)
    div = (float)a / (float)b;//use float before a and b for valid ans.
    printf("\nDivision is : %f", div);
    
    // Pass the msg to take user inpute for modulo.
    ans = a%b;
    printf("\nModulo of the a and b is:%d", ans);
    
    return 0;
}
