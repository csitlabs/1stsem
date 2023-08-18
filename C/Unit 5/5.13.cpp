// 13. WAP to illustrate the use of break within loop.

#include<stdio.h>
int main(){
	for(int i=1;i<=10;i++){
		if(i==4){
		break;
		}
		printf("%d\t",i);
	}
	return 0;
}
