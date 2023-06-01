#include <stdio.h>
void main (){
	int x,y;
	printf("Enter x value:\n");
	scanf("%d",&x);
	printf("Enter y value:\n");
	scanf("%d",&y);

	if(x<y){

		printf("Min value is %d\n",x);
	}else if(y<x){

		printf("Min value is %d\n",y);
	}else{
		printf(" Both are Same\n");
	}
}
