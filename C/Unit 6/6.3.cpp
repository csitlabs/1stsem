// 3. WAP to read two M*N matrices and display their sum or difference.

#include<stdio.h>
#define M 3
#define N 3
int main(){
	int a[M][N],b[M][N],i,j;
	printf("Enter the elements of 1st matrix:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}	
	printf("The 1st matrix is:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
	printf("Enter the elements of 2nd matrix:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The 2nd matrix is:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d\t",b[i][j]);
		}
	printf("\n");
	}
	printf("The sum of matrices is:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d\t",a[i][j]+b[i][j]);
		}
	printf("\n");
	}
	return 0;
}
