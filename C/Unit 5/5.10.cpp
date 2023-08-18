// 10. WAP that check whether the entered number is Armstrong Number.

#include<stdio.h>
int main(){
	int num,rem,sum=0,check;
	printf("Enter a number: ");
	scanf("%d",&num);
	check=num;
	while(num!=0){
		rem=num%10;
		sum+=rem*rem*rem;
		num/=10;
	}
	if(check==sum){
		printf("%d is Armstrong Number.",check);
	}
	else{
		printf("%d is not Armstrong Number.",check);
	}
	return 0;
}

