
//Default Parameter
//He concept C Language madhe chalt nahi

#include<stdio.h>

void  fun(int ,int ,int);// Declaraction ethe jaga milt nahi
void main(){

	int x=10;
	int y=20;
	int z=30;
	fun(x,y,z);
	fun(x,y);// 3 argument ahet but ethe 2 ch ahet he cocept chalt nahi in c Language
}
void fun(int x,int y,int z=50){// In c language parameter laaa value dileli chalt nahi.

	printf("Add=%d\n",x+y+z);
}
//Error
