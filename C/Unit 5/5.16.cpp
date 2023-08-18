// 16. WAP to input an integer number and check whether it is prime number or not.

#include<stdio.h>
int main(){
	int num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			printf("%d is not a prime number.",num);
			break;
		}
	}
	if(num==i){
		printf("%d is a prime number.",num);
	}
	return 0;
}

