// 5. WAP that performs the arithmetic operation using switch statement.

#include<stdio.h>
int main(){
	int a,b;
	char c;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Select + to add, - to subtract, * to multiply and / to divide. \n");
	printf("Enter your choice: ");
	scanf(" %c",&c);
	switch(c){
		case '+':
		printf("Sum of two numbers= %d",a+b);
		break;
		case '-':
		printf("Difference of two numbers= %d",a-b);
		break;
		case '*':
		printf("Product of two numbers= %d",a*b);
		break;
		case '/':
		printf("Division of two numbers= %d",a/b);
		break;
		default:
		printf("Invalid choice.");
	}
	return 0;
}

