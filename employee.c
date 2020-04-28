#include<stdio.h>

struct employee
{
	int no;
	char name[10];
	char dpt_name[20];
	float salary;
}emp[100];
void main()
{
	int i;
	for(i=0;i<20;i++)
	{
		printf("\n Enter employee no-:");
		scanf("%d",&emp[i].no);
		printf("\n Enter employee name-");
		scanf("%s",emp[i].name);
		printf("\n Enter employee department name-");
		scanf("%s",emp[i].dpt_name);
		printf("\n Enter employee salary-");
		scanf("%f",&emp[i].salary);

	}
	printf("\n Employee Details-\nCode\tName\tDepartment Name\tSalary");
	for(i=0;i<20;i++)
	{
     printf("\n%d\t%s\t%s\t\t%f",emp[i].no,emp[i].name,emp[i].dpt_name,emp[i].salary);
	}
	return 0;
}
