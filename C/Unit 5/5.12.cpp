// 12. WAP to find the Fibonacci sequence: 1,1,2,3,5,8,13,…..

#include<stdio.h>
int main(){
	int a=1,b=1,c,num;
	printf("Enter number upto which you want Fibonacci sequence: ");
	scanf("%d",&num);
	printf("%d",a);
	do{
		printf(",%d",b);
		c=a+b;
		a=b;
		b=c;
	}while(num>b);
	return 0;
}
