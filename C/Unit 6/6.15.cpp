// 15. WAP to convert a string to uppercase using strupr() library functions.

#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("Enter a string: ");
	gets(string);
	strupr(string);
	printf("String in uppercase = %s",string);
	return 0;
}
