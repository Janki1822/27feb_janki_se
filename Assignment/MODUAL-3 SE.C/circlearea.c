// WAP to find area of Rectangle
#include<stdio.h>
int main()
{
	//Take variable for find area
	int L,W;
    float A = L*W;
	
	//Take user's input 
	printf ("enter the length of Rectangle");
	scanf("%d", &L);
	printf("\nenter the width of Rectangle");
	scanf("%d", &W);
	
	A = (L*W);//Find area of Rectangle formula using multiplication
	 
	//Print the value of rectangle
	printf("\nArea of Rectangle is%f", A);
	
	return 0;
}
