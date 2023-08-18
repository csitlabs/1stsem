// 2. WAP to read a matrix of size M*N from user and display it on screen.

#include<stdio.h>
int main(){
	int a[10][10],i,j,M,N;
	printf("Enter rows of matrix: ");
	scanf("%d",&M);
	printf("Enter columns of matrix: ");
	scanf("%d",&N);
	printf("Enter the elements of matrix:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix is:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
	return 0;
}

