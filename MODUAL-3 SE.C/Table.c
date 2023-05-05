//WAP to make Table 
#include<stdio.h>
int main()
{
	// TAKE input 12 num table.
	int no,i;
	printf("Enter the number:");
	scanf("%d", &no);
	
	// Make 12 number table by use for loop.
	for(i = 1; i <= 10; i++)
	{
		printf("\n%d", no*i); //print the 12 no table in program.
		/*printf("\n%d*%d=%d",no,i, no*i);*/ // In the table this is use by structure program. 
		                                    //ex(%d)for 12no, 2nd (%d)for multipliy by 1 to 10, last (%d) for result. 
	}
	return 0;
}
