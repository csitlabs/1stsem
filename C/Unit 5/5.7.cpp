// 7. WAP to sum all integers from 1 to 100 using for loop.

#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<=100;i++){
		sum=sum+i;
	}
	printf("Sum is %d.",sum);
	return 0;
}

