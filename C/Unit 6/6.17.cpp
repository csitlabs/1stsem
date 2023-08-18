// 17. WAP to compare two strings using strcmp() library function.

#include<stdio.h>
#include<string.h>
int main(){
	char string1[100],string2[100];
	int result;
	printf("Enter 1st string: ");
	gets(string1);
	printf("Enter 2nd string: ");
	gets(string2);
	result=strcmp(string1,string2);
	if(result==0){
		printf("Two strings are identical.");
	}
	else if(result>0){
		printf("%s is greater than %s.",string1,string2);
	}
	else{
		printf("%s is greater than %s.",string2,string1);
	}
	return 0;
}
