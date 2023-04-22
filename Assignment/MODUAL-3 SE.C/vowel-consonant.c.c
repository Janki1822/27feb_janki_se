//WAP to check vowel and consonent.
#include<stdio.h>
int main()
{
	char alphabate;
	int vowel,consonent;
	
	// pass the msg to take user's input
	printf("enter the value of vowel");
	scanf("%d", &vowel);
	printf("enter the value of consonent");
	scanf("%d", &consonent);
	
	// pass the vowel
	printf("\na\ne\ni\no\nu");
	scanf("%d", &alphabate);
	
	// use the switch case to check vowel or consonent.
	switch (alphabate)
	{
		case 'a':
			printf("\na is:%d", vowel);
			break;
			
		case 'A':
		    printf("\nA is:%d", vowel);
			break;
				
	    case 'e':
		    printf("\ne is:%d", vowel);
			break;
				
	    case 'E':
		    printf("\nE is:%d", vowel);
			break;
				
		case 'i':
		    printf("\ni is:%d", vowel);
			break;
				
		case 'I':
		    printf("\nI is:%d", vowel);
			break;	
			
		case 'o':
		    printf("\no is:%d", vowel);
			break;
				
		case 'O':
			printf("\naO is:%d", vowel);
			break;
			
		case 'u':
		    printf("\nu is:%d", vowel);
			break;
				
		case 'U':
		    printf("\nU is:%d", vowel);
			break;
		
		default :
		printf("\nenter the consonent.......");
		break;		
	
	
	}
	return 0;
	
	
}
