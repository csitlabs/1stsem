/* 3. WAP to read the marks of four subjects of a student from the user and
compute percentage and grade of the student using the following conditions:
percentage>=80 grade = A
percentage<80 and per>=60 grade = B
percentage<60 and per>=50 grade = C
percentage<50 and per>=40 grade = D
percentage<40 grade = F */

#include<stdio.h>
int main(){
	float m1,m2,m3,m4,percentage;
	char grade;
	printf("Enter marks of 4 subjects: ");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	percentage=(m1+m2+m3+m4)/4;
	if(percentage>=80)
		grade = 'A';
	else if(percentage>=60)
		grade = 'B';
	else if(percentage>=50)
		grade = 'C';
	else if(percentage>=40)
		grade = 'D';
	else
		grade = 'F';
	printf("Percentage is %.2f. \nGrade is %c.",percentage,grade);
	return 0;
}

