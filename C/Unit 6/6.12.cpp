// 12. WAP to reverse a string using library functions.

#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("Enter a string: ");
	gets(string);
	strrev(string);
	printf("String after reversing = %s",string);
	return 0;
}
