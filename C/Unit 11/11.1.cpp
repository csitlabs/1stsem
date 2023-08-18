// LAB 1: WAP to draw a line passing from a point (0,50) to another point (200,300).

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	if(graphresult()!=0){
		printf("Initialization failed.");
	}
	setcolor(GREEN);
	line(0,50,200,300);
	getch();
	closegraph();
	return 0;
}
