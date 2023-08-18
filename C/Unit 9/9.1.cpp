// LAB 1: WAP for illustrating use of pointers.

#include<stdio.h>
int main(){
	int x=10, *p=&x;
	printf("The value of x= %d",x);
	printf("\nThe address of x= %u",p);
	printf("\nThe value of x= %d",*p);		//* is indirection or dereference operator
	return 0;
}
