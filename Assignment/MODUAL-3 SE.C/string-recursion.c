//WAP to find reverse of string using recursion
#include<stdio.h>
void reverse(char str[],int i)// take the string variable in perameter.
{
	if(str[i]==0)//String size == 0 so i == 0 value
	return;
	reverse(str,i+1);
	printf("%c",str[i]);
}
//
int main()
{
	char str[20];
	printf("enter the string:");// pass the msg to reverse string 
	gets(str);
	printf("String reverse is");
	reverse(str,0);
	
	return 0;
}
