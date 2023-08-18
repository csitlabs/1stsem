// LAB 2: WAP for illustrating use of array of pointers.

#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	int *p[5];
	for(int i=0;i<5;i++){
		p[i]=&a[i];		//store address of array element
		printf("Address= %u\n",p[i]);
	}
	return 0;
}
