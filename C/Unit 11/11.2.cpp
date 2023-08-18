// LAB 2: WAP to draw two concentric circles with center (200,200) and radii 50 and 75.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
	if(graphresult()!=0){
		printf("Initialization failed.");
	exit(0);
	}
	circle(200,200,50);
	circle(200,200,75);
	getch();
	closegraph();
	return 0;
}
