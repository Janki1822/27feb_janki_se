//WAP of structure employe that provide the following 
#include<stdio.h>
struct structure
{
	int id,age,add;
	char nm[20];
};

int main()
{
	struct structure st[20];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the value of id");
		scanf("%d", &st[i].id);
		printf("enter the value of age");
		scanf("%d", &st[i].age);
		printf("enter the value of add");
		scanf("%d", &st[i].add);
		printf("enter the value of nm");
		scanf("%d", &st[i].nm);
		
	}
	for (i=0;i<3;i++)
	{
		printf("\n%s your empon is:%d%d%d%d%d", st[i].id,st[i].age,st[i].add,st[i].nm);
	}
}
