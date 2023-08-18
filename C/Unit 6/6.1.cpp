// 1. WAP that reads 10 float numbers from user and displays the entered numbers in the screen.

#include<stdio.h>
int main(){
	float num[10];
	printf("Enter 10 numbers: ");
	for(int i=0;i<10;i++){
		scanf("%f",&num[i]);
}
printf("Entered numbers are:\n");
	for(int i=0;i<10;i++){
		printf("num[%d] = %f\n",i,num[i]);
}
return 0;
}
