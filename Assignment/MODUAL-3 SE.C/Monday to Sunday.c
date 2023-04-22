//WAP to show this peogram using Switch case
/*
  1. Monday to Sunday 
  2. vowel or consonant
*/
#include<stdio.h>
int main()
{
	int Week;
	
	printf("\nenter the value of Week.");
	scanf("%d", &Week);
	
	//pass the week of 7 days 
	printf("\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday");
	
	// take the user's input to show all days using switch case
	switch (Week)
	{
		case 1:
		     printf("\nMonday is:%d", Week);
		     break;
		     
		case 2:
		     printf("\nTuesday is:%d", Week);
		     break;
		     
		case 3:
		     printf("\nWednesday is:%d", Week);
		     break;
		     
		case 4:
			 printf("\nThursday is:%d",Week);
			 break;
			 
		case 5:
			 printf("\nFriday is:%d", Week);
			 break;
			 
		case 6:
			 printf("\nSaturday is:%d", Week);
			 break;
			 
		case 7:
			 printf("\nSunday is:%d", Week);
			 break;
			 
		default:
		     printf("\nshow the week.....");
			 break;
			 	 
	}
	return 0;

	
}
   
