// LAB 2: WAP to open the file named test.txt, read its content and display it to screen.

#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	char message[100];
	fptr = fopen("D:\\test.txt","r"); 	//read-mode
	if(fptr==NULL){
	printf("No file found.");
	exit(0);
	}
	fgets(message,20,fptr);
	printf("%s",message);
	fclose(fptr);
	return 0;
}
