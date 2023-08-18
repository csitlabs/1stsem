// 13. WAP to read a string and count the number of vowels and consonants in it.

#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	int i,vowels=0,consonants=0;
	printf("Enter a string: ");
	gets(string);
	strlwr(string);
	for(i=0;string[i]!='\0';i++){
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
		vowels++;
		}
		else{
		consonants++;
		}
	}
	printf("Number of vowels = %d\nNumber of consonants = %d",vowels,consonants);
	return 0;
}
