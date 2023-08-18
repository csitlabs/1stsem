// LAB 4: WAP to read name, id and salary of 5 employee and display their details using function.

#include<stdio.h>
struct employee{
	char name[20];
	int id;
	float salary;
};
void display(struct employee []);
int main(){
	struct employee e[5];
	printf("Enter details of 5 employees\n");
	for(int i=0;i<5;i++){
		printf("Name: ");
		scanf("%s",e[i].name);
		printf("ID: ");
		scanf("%d",&e[i].id);
		printf("Salary: ");
		scanf("%f",&e[i].salary);
	}
	display(e); //passing address of 1st element of an array of structure
	return 0;
}
void display(struct employee e[]){
	printf("The details of 5 employees: \n");
	for(int i=0;i<5;i++){
		printf("\nName: %s",e[i].name);
		printf("\nID: %d",e[i].id);
		printf("\nSalary: %f",e[i].salary);
	}
}
