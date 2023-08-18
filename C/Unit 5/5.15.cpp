/* 15. WAP to display the following menu
		1. To find area of circle
		2. To check the given number is odd or even
		3. To find the sum of N numbers
		4. Exit */
		
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define PI 3.14
int main(){
	int choice,n,N,sum;
	float r;
	printf("1. Find area of circle.");
	printf("\n2. Check the given number is odd or even.");
	printf("\n3. Find the sum of N numbers.");
	printf("\n4. Exit.");
	while(TRUE){
		printf("\nEnter a choice: ");
		scanf("%d",&choice);	
		switch(choice){
		case 1:
		printf("\nEnter a radius: ");
		scanf("%f",&r);
		printf("Area of circle = %.2f",PI*r*r);
		break;
		case 2:
		printf("\nEnter a number to check even or odd: ");
		scanf("%d",&n);
		if(n%2==0)
			printf("%d is even number.",n);
		else
		printf("%d is odd number.",n);
		break;
		case 3:
		sum=0;
		printf("\nHow many numbers do you want to add? ");
		scanf("%d",&N);
		printf("Enter %d numbers:",N);
		for(int i=1;i<=N;i++){
			scanf("%d",&n);
			sum+=n;
		}
		printf("Sum = %d",sum);
		break;
		case 4:
		exit(0);
		default:
		printf("\nInvalid choice. Please try again.");
		}
	}	
	return 0;
}

