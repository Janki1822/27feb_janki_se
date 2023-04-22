//WAP to show diffrence between structure and union.
#include<stdio.h>
#include<string.h>
/*struct structure
{
	//variable known as data member was define inside the body
    int id;
    char nm[20];
}st;
int main()
{
	struct structure st;//this declered structure
	printf("enter the value of id:");
	scanf("%d", &st.id);
	printf("enter the value of name");
	scanf("%s",&st.nm);
	
	printf("\n%s your id is:%d",st.nm, st.id );
}
// In Structure program show the enter value and print properly.
*///
/* The differnce is in structure indivudual member can be accessed at a time and
  in union only one person can be acessed at atime.
*/
union structure
{
	int id;
	char nm[20];
}st;
int main()
{
	union structure st;// this declered union 
	printf("enter the value of id:");
	scanf("%d", &st.id);
	printf("enter the value of name");
	scanf("%s",&st.nm);
	
	printf("\n%s your id is:%d",st.nm, st.id );
	return 0;
}
//Union program show the enter value print but not properly print the value.


