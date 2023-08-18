// LAB 3: WAP to open the file named test.txt and add to it the text “At Prime College”.

#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("D:\\test.txt","a");  // append-mode
	if(fptr==NULL){
		printf("File can't be opened.");
	}
	fputs("At Prime College.",fptr);
	fclose(fptr);
	return 0;
}
