// 9. WAP to find the sum of digits of any number supplied by the user using while loop.

#include<stdio.h>
int main(){
	int num,rem,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("Sum of digits = %d",sum);
	return 0;
}
