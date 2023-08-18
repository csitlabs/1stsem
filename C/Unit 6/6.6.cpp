// 6. WAP to read two matrices from user and multiply them if possible.

#include<stdio.h>
int main(){
	int a[10][10],b[10][10],s[10][10];
	int m,n,x,y,i,j,k;
	printf("Enter number of rows in 1st matrix: ");
	scanf("%d",&m);
	printf("Enter number of columns in 1st matrix: ");
	scanf("%d",&n);
	printf("Enter number of rows in 2nd matrix: ");
	scanf("%d",&x);
	printf("Enter number of columns in 2nd matrix: ");
	scanf("%d",&y);
	if(n!=x){
		printf("Matrix multiplication is not possible.");
	}
	else{
		printf("Enter the elements of 1st matrix:\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}	
		}
		printf("The 1st matrix is:\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d\t",a[i][j]);
			}
		printf("\n");
		}
		printf("Enter the elements of 2nd matrix:\n");
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				scanf("%d",&b[i][j]);
			}
		}
		printf("The 2nd matrix is:\n");
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				printf("%d\t",b[i][j]);
			}
		printf("\n");
		}
		for(i=0;i<m;i++){
			for(j=0;j<y;j++){
				s[i][j]=0;
				for(k=0;k<n;k++){
					s[i][j]=s[i][j]+a[i][k]*b[k][j];
				}
			}	
		}	
		printf("The multiplication of matrices is:\n");
		for(i=0;i<m;i++){
			for(j=0;j<y;j++){
				printf("%d\t",s[i][j]);
			}	
		printf("\n");
		}
	}
	return 0;
}
