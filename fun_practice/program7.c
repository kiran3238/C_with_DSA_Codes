#include<stdio.h>
void fun (int ,int );//int nater variable nahi pass kele tari chaltat
void main(){
	int x,y;//he two x&y and void fun che x&y different astat.

	printf("Enter values:\n");
	scanf("%d%d",&x,&y);

	fun(x,y);//function call//argument
}
void fun(int x,int y){	//x &y these are parameters
                 printf("%d\n",x+y);
}

