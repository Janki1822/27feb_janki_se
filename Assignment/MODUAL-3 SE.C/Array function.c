//WAP to find out the max number from gven array using function.
#include<stdio.h>
int main()
{
	int j[20],s,i,max;// Take the variable 
	
	printf("Enter the size of array:");// pass the msg to find array size
	scanf("%d", &s);
	
	for(i =0; i < s; i++)// loop using for find maximum value of array.
	{
		scanf("%d", &j[i]);
	}
	max = j[0];// find max value
	for(i = 0; i < s; i++)
	{
		if(j[i]> max)
		{
			max = j[i];
		}
	}
	printf("\n max value of array is:%d", max);// print the users input for outputs
	
	return 0;
}
