// LAB 3: WAP to demonstrate the relationship between arrays and pointer.

#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int *p=a; 	//p is assigned the address of 1st element
	for(int i=0;i<5;i++){
		printf("%d\n",*p);
		p++; 	// move the p pointer to the next memory location
	}
	for(int i=0;i<5;i++){
	printf("%u\n",p);
	p++;
	}
	return 0;
}
