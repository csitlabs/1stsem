// LAB 2: WAP creating structure named student that has name, roll, marks and remarks as its members. Assume appropriate types and use this structure to read and display records of 5 students.

#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
	char remarks;
};
int main(){
	struct student s[5];
	int i;
	printf("Enter details of 5 students\n");
	for(i=0;i<5;i++){
		printf("Name: ");
		scanf("%s", s[i].name);
		printf("Roll: ");
		scanf("%d", &s[i].roll);
		printf("Marks: ");
		scanf("%f", &s[i].marks);
		printf("Remarks: ");
		scanf(" %c", &s[i].remarks);
	}
	printf("Details of 5 students: \n");
	for(i=0;i<5;i++){
		printf("Name = %s \t Roll = %d \t Marks =%f \t Remarks = %c \n", s[i].name, s[i].roll, s[i].marks, s[i].remarks);
	}
	return 0;
}
