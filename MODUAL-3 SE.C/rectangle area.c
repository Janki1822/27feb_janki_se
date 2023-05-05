//WAP to find area of Circle
#include<stdio.h>
int main()
{
	//Take pie value find to Circle area  
	int r;
	float pie = 3.14;//Using float for pointer value
	
	printf("enter the redious of Circle");//take user's input
	scanf("%d", &r);
	
	printf("\nThe redious of circle is:%d", r);
	
	float area = (float)(pie*r*r); // Find the value by using Circle formula (pie*r2)
	 
	//Print the value of Circle
	printf("\nGiven area of the circle is:%f",  area);//print the value

    return 0;	
}
