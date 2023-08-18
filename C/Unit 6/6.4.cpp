// 4. WAP to find transpose of a matrix.

#include<stdio.h>
#define M 3
#define N 3
int main(){
	int a[M][N],b[M][N],i,j;
	printf("Enter the elements matrix:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix to be transposed is:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
	printf("The transposed matrix is:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d\t",a[j][i]);
		}
	printf("\n");
	}
	return 0;
}

