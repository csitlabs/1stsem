// 11. WAP to read a number from keyboard and check whether it is a palindrome or not.

#include<stdio.h>
int main(){
	int num,rem,rev=0,check;
	printf("Enter a number: ");
	scanf("%d",&num);
	check=num;	
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(check==rev){
		printf("%d is a palindrome number.",check);
	}
	else{
		printf("%d is not a palindrome number.",check);
	}
	return 0;
}

