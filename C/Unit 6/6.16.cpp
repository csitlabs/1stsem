// 16. WAP to convert a string to lowercase using strlwr() library function.

#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("Enter a string in uppercase: ");
	gets(string);
	strlwr(string);
	printf("String in lowercase = %s",string);
	return 0;
}
