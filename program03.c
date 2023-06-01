#include<stdio.h>
void main(){
	int x,y;
	printf("enter the x value:\n");
	scanf("%d", &x);
	printf("enter the y value:\n");
	scanf("%d", &y);

	if(x>y){
		printf("Max i is %d\n",x);
	
	}else if (y>x){
		printf("Max no is %d\n",y);

	}else{

		printf(" Both are same \n");
	}
}
