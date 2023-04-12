// WAP to check chocolate price by using nested switch.
#include<stdio.h>
int main()
{
	// definr the chocolate price
    int chocolate;
    int price;
    
    // pass the msg to take user's input
	printf("enter the value of chocolate");
	scanf("%d", &price);
	printf("enter the value of price");
	scanf("%d", &price);
	
	//paas the menu
	printf("\nbournvilla\nkitkat\ndairymilk\nmunch");
	scanf("%d", &chocolate);
	
	//use the nested switch case to find chocolate price
	switch (chocolate)
	{
		case 'bournvilla':
			switch (price)
			{
				price = 50;
				printf("\nbournvilla price is:%d", 50);
				break;
			}
			
		case 'kitkat':
		    switch (price)
			{
				price = 20;
				printf("\nkitkat price is:%d", 20);
				break;
			}
			
		case 'diarymilk':
		    switch (price)
			{
				price = 10;
				printf("\ndairymilk price is:%d", 10);
				break;
			}
			
		case 'munch':
		   switch (price)
		   {
		   	    price = 5;
		   	    printf("\nmunch price is:%d", 5);
		   	    break;
		   }		
		   default:
		        printf("\ninvalid choice................ ");
				break;	
	
	
	}
	return 0;
} 
