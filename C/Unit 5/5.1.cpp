// 1. WAP to check whether entered number is negative.

#include<stdio.h>
int main(){
	int n;
	printf("Enter a number to be tested: ");
	scanf("%d",&n);
	if(n<0){
		printf("The number %d is negative.",n);
	}
	return 0;
}

