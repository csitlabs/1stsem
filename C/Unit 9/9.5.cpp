// Lab 5: WAP to read an array of integers using DMA and display minimum and maximum value.

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,min,max;
	int *ptr;
	printf("Enter the size of block: ");	
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("Enter elements of array: ");
	for(i=0; i<n; i++){
		scanf("%d",ptr+i);
	}
	min=*ptr;
	max=*ptr;
	for(i=1;i<n;i++){
		if(min>*(ptr+i)){
			min=*(ptr+i);
		}
		if(max<*(ptr+i)){
			max=*(ptr+i);
		}
	}
	printf("The minimum value is: %d",min);
	printf("\nThe maximum value is: %d",max);
	return 0;
}
