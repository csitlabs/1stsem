// 8. WAP to find the sum and average of the marks of five subjects using for loop.

#include<stdio.h>
int main(){
	float marks,total=0,average;
	for(int i=1;i<=5;i++){
		printf("Enter marks in %d th subject: ",i);
		scanf("%f",&marks);
		total+=marks;
	}
	printf("Total marks = %.2f",total);
	printf("\nAverage marks = %.2f",total/5);
	return 0;
}

