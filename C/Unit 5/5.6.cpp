// 6. WAP to calculate the factorial of a positive number read from user using for loop.

#include<stdio.h>
int main(){
	int i,num;
	long fac=1;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fac=fac*i;
	}
	printf("Factorial of %d is %d.",num,fac);
	return 0;
}
