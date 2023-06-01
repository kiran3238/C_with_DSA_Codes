/*WAP to swap values of two number using apointer (Hint: use deferencing of pointer)*/
#include<stdio.h>
void main(){
	int x=10;
	int y=20;

	int *ptr1=&x;
	int *ptr2=&y;
	int temp=x;
	temp=*ptr1;
	*ptr1=y;
	*ptr2=temp;

	printf("%d\n",x);
	printf("%d\n",y);
}

