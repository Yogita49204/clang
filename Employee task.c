#include<stdio.h>
struct employee
{
	char empname[20];
	int empno;
	int salary;
	int age;
};
int main()
{   int i;
    struct employee emp[3];
    
	for(i=0;i<3;i++)
	{
	printf("\nenter details of %d employee",i+1);
		
	printf("\n\t employee name:");
	scanf("%s",emp[i].empname);
	printf("\n\t employee age:");
	scanf("%d",&emp[i].age);
	printf("\n\t employee phone number:");
	scanf("%ld",&emp[i].empno);
	printf("\n\t employee salary:");
	scanf("%d",&emp[i].salary);
	printf("\n\n");
    }
    
    printf("details entered by the employees are:\n");
    for(i=0;i<3;i++)
    {
    	printf("\n%s\t%d\t%ld\t%d",emp[i].empname,emp[i].age,emp[i].empno,emp[i].salary);
    	
