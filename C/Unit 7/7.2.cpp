// LAB 2: WAP to illustrate function call by value. (Note: Example below should be written in exam for call by value question.)

#include<stdio.h>
void swap(int, int);
int main(){
	int a=10,b=20;
	printf("Before swapping: \na=%d \t b=%d",a,b);
	swap(a,b);		//only values of a and b are copied to x and y. so whatever changes we make in function below with x and y,it doesn’t affect the a b variables.
	printf("\nAfter swapping: \na=%d \t b=%d",a,b);
	return 0;
}
void swap(int x, int y){	//x=10 y=20only values of x and y are swapped but not a and b.
	int temp;
	temp=x;
	x=y;
	y=temp;
}
