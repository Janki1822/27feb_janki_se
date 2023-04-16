//WAP to draw the piramid pettern 
/*
          1
         1 2
        1 2 3
       1 2 3 4
      1 2 3 4 5
*/ 
  
#include<stdio.h>
int main()
{
	int i,j,k,l,m;
	for(i = 1; i <= 5; i++) // use for raw
	{
		for(j = 1; j <= 5-i; j++) //use for coloumn
		{
			
			printf("  ");
		}
		m = 1;
		for(k = 1; k <= i; k++)
		{
			printf("%d  ", m++);
		}
		m = m-2;
		for(l = i; l < i; l++)
		{
			printf("%d  ", m--);
		}
		printf("\n ");
	}
	
	return 0;
}
