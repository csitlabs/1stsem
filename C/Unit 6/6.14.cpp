// 14. WAP to check whether a given string is a palindrome or not.

#include<stdio.h>
#include<string.h>
int main(){
	char string1[100],string2[100];
	printf("Enter a string: ");
	gets(string1);
	strcpy(string2,string1);
	strrev(string1);
	if(strcmp(string1,string2)==0){
		printf("Palindrome");
	}
	else{
		printf("Not Palindrome");	
	}
	return 0;
}
