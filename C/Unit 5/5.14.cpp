// 14. WAP to illustrate the use of continue statement.

#include<stdio.h>
int main(){
	for(int i=1;i<=10;i++){
		if(i==2){
		continue;
	}
	printf("%d\t",i);
	}
	return 0;
}
