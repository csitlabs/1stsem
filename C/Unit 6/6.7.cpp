/* 7. Write a menu-driven program to input a 3*3 matrix and display the menu.
		Menu:
			• Print the input matrix
			• Sum of even values of elements
			• Sum of all diagonal elements
			• Exit */

#include<stdio.h>
#define M 3
#define N 3
int main(){
	int a[3][3],sum;
	int i,j,choice;
	printf("Enter the elements of matrix: \n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter 1 to display matrix.");
	printf("\nEnter 2 to display sum of even values of elements.");
	printf("\nEnter 3 to display sum of all diagonal elements.");
	printf("\nEnter 4 to exit.");
	do{
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			printf("The matrix is:\n");
			for(i=0;i<M;i++){
				for(j=0;j<N;j++){
					printf("%d\t",a[i][j]);
				}
			printf("\n");
			}
			break;
			case 2:
			sum=0;
			for(i=0;i<M;i++){
				for(j=0;j<N;j++){
					if(a[i][j]%2==0){
						sum+=a[i][j];
					}
				}
			}
			printf("Sum of even values of elements = %d",sum);
			break;
			case 3:
			sum=0;
			for(i=0;i<M;i++){
				for(j=0;j<N;j++){
					if(i==j){
						sum+=a[i][j];
					}
				}
			}
			printf("Sum of all diagonal elements = %d",sum);
			break;
			case 4:
			break;
			default:
			printf("Invalid option. Please try again.");
		}
	}while(choice!=4);
return 0;
}
