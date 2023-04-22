//WAP to convert years into days and days into years.
#include<stdio.h>
int main()
{
	//Take the days ,year,and week variable
	int d,y,w;
	
	//Pass the msg to take user's input
	printf("enter the total days");
	scanf("%d", &d);
	
	//Enter the value to convert year and days.
	y = d/365;     // find the year divide by total days
	w = (d%365)/7; // find the weeks divisible total days and divide by 7 
	d = (y%365)%7; // find the days divisible by year.
	
	// Print the msg value.
	printf("\nthe year is:%d \nweeks is:%d \ndays is:%d", y,w,d);
	
	return 0;
}
