// LAB 4: WAP to open a file and copy all its content to another file.

#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *sfptr,*dfptr;
	char c;
	sfptr=fopen("D:\\test.txt","r");
	if(sfptr==NULL){
		printf("File can't be opened.");
		exit(0);
	}
	dfptr=fopen("D:\\dest.txt","w");
	if(dfptr==NULL){
		printf("File can't be created or opened.");
		exit(0);
	}
	while((c=fgetc(sfptr))!=EOF){
	fputc(c,dfptr);
	}
	fclose(sfptr);
	fclose(dfptr);
	return 0;
}
