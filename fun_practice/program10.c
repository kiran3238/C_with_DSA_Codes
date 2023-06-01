//Using function swapping code using third variable
//By call by Adress 
//CAll by reference
#include<stdio.h>
void swap(int *,int *);

void main(){

	int x=10;
	int y=20;

	printf("%d\n",x);
	printf("%d\n",y);

	swap(&x,&y);

	printf("%d\n",x);
	printf("%d\n",y);

}
void swap(int *x,int *y){

	printf("%d\n",*x);
	printf("%d\n",*y);

	int temp;
	temp=*x;
	*x=*y;
	*y=temp;

	printf("%d\n",*x);
	printf("%d\n",*y);
}
