//WAP to make simple calculater(operation include Addition, Subtraction, Multiplication, Division, Modulo)
#include<stdio.h>
int main()
{
	/*
	Addition         (+)
	Subtraction      (-)
	Multiplication   (*)
	Division 		 (/)
	Modulo 			 (%)
	*/
    
    int calculater;
    int no1, no2;
    
    printf("enter the value of no1:");
    scanf("%d", &no1);
    printf("enter the value of no2:");
    scanf("%d", &no2);
    
    // Pass the menu
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo");
    
    //Take the user's choice
    printf("\nenter your choice:");
    scanf("%d", &calculater);
    
    //Find user's choice using switch case program
	//switch case used when we want to give user's choice..
	
	switch(calculater) 
	{
		case 1:
			printf("\nAddition is:%d", no1 + no2);
			break;
			
		case 2:
			printf("\nSubtraction is:%d", no1 - no2);
			break;
			
		case 3:
			printf("\nMultiplication is:%d", no1 * no2 );
			break;
			
		case 4:
			printf("\nDivision is:%d", (float)no1 /(float) no2);
			break;
			
		case 5:
		    printf("\nModulo is:%d", no1 % no2);
			break;	
			
		default:
		 	printf("\nEnter valid choice......");
		 	break;
	}
	return 0;
}
