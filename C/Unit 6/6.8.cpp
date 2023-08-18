// 8. WAP that accepts the elements of 3*3 matrix and calculate the sum of all elements of the matrix.

#include<stdio.h>
#define M 3
#define N 3
int main(){
	int a[M][N],sum=0;
	int i,j;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
printf("Sum of all elements = %d",sum);
return 0;
}
