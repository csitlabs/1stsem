// 9. WAP to illustrate the use of strcpy() function.

#include<stdio.h>
#include<string.h>
int main(){
	char a[12]="Hello World";
	char b[50];
	strcpy(b,a);
	printf("Copied string = %s",b);
	return 0;
}

