// LAB 1: WAP to create a file named test.txt and write some text “I study CSIT”.

#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	fp=fopen("D:\\test.txt","w");	 //write-mode
	if(fp==NULL){
		printf("\n File can't be created.");
	exit(0);
	}
	fputs("I study CSIT.", fp);
	fclose(fp);
	return 0;
}
