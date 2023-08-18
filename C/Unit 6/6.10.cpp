// 10. WAP to find the length of a string using library function strlen().

#include<stdio.h>
#include<string.h>
int main(){
	char name[50];
	int length;
	printf("Enter your name: ");
	scanf("%s",name);
	length=strlen(name);
	printf("Length of name = %d",length);
	return 0;
}
