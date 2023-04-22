//WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
	/*
	Leap year 
	1) 1600 2000 2400 2600.....//This year divisible by 400 . That is Leap Year
	2) 2012 2016 2020.....2096 and
	3)2100 2200 2300 2500 //This year if not divisible by 400 or 4. that isn't Leap Year.
	*/
	
	int Y;// Take the variable 
	
	//Pass the msg to take user's input
	printf("enter the any Year:");
	scanf("%d", &Y);
	
	// In this program i use if-else condition statement find leap year
	if(Y%400 == 0 || Y%4 == 0 && Y%100 != 0)//If Year is divisible by 400 or 4 or 100 and value is 0 , that year is Leap year
	{
		printf("\nThis year is Leapyear");
	} 
	else
	{
		printf("\nThis year is not Leapyear");
	}
	
	return 0;
}
