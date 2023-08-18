#include<stdio.h>
int main(){
	int num,digit1, digit2, digit3, digit4, sum;
	printf("Enter a five digits number: ");
	scanf("%d",&num);
	digit1=num%10;
	num=num/10;
	digit2=num%10;
	num=num/10;
	digit3=num%10;
	num=num/10;
	digit4 = num%10;
	num = num /10;
	sum = digit1+digit2+digit3+digit4+num;
	printf("Sum: %d",sum);
	return 0;
}
