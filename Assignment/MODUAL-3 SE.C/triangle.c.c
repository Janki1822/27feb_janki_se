//WAP to find area of Triangle
#include<stdio.h>
int main()
{
	//Take the float value find Triangle area 
	int b,h;
	float area = (b*h)/2;
	
	//Take user's input
	printf("enter the base of Triangle");
	scanf("%d", &b);
	
	printf("enter the hight of Triangle");
	scanf("%d", &h);
	
	area = (float)(b*h)/2;//Take the value of Tringle by using formula
	
	//Print the value of Triangle
	printf("\nArea of Triangle is:%f", area);
	
	return 0;
	
}
