#include<stdio.h>
int main(){
	int a,b,larger;
	printf("Enter 2 number: ");
	scanf("%d%d",&a,&b);
	larger=a>b?a:b;
	printf("The larger number is: %d",larger);
	return 0;
}
