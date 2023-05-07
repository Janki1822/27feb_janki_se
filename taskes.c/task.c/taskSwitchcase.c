#include<stdio.h>
int main()
{
	int chocolate;
	
	printf("\nenter the value of chocolate.");
	scanf("%d", &chocolate);
	
	//pass the week of 7 days 
	printf("\n1.Bournvilla\n2.Kitkat\n3.Park\n4.Munch\n5.Dairymikl");
	
	// take the user's input to show all days using switch case
	switch (chocolate)
	{
		case 1:
		     printf("\nBournvilla is:%d", chocolate);
		     break;
		     
		case 2:
		     printf("\nKitkat is:%d", chocolate);
		     break;
		     
		case 3:
		     printf("\nPark is:%d", chocolate);
		     break;
		     
		case 4:
			 printf("\nMunch is:%d", chocolate);
			 break;
			 
		case 5:
			 printf("\nDairymilk is:%d", chocolate);
			 break;
			 
		default:
		     printf("\nfavorite chocolate is.....");
			 break;
			 	 
	}
	return 0;

	
}

