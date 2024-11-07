/*
 A C STRUCTURE NAMED EMPLOYEE WHICH CONTAINS THE FOLLOWING FIELDS;NAME,ID,DEPARTMENT,SALARY AND EMAIL.
 AUTHOR:MUTHEE ANTONY KARIUKI.
 REG NO:CT101/G/23600/24.
 DATE:07/11/24.
 */
#include<stdio.h>
#include<strings.h>
struct employee{
	char name[25];
	int ID;
	char department[20];
	float salary;
	char email[50];
}
employee;
int main(){
	strcpy(employee.name,"John Doe");
	employee.ID=12345;
	strcpy(employee.department,"Human Resources");
	employee.salary=55000.50;
	strcpy(employee.email,"johndoe@company.com");
	
	printf("name: %s \n",employee.name);
	printf("ID: %d \n",employee.ID);
	printf("department: %s \n",employee.department);
	printf("salary: %.2f \n",employee.salary);
	printf("email: %s \n",employee.email);
	
	return 0;
}
