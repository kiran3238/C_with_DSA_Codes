#include<stdio.h>
void main(){
	double x=30.50;
	char y='A';
	double *ptr1=&x;
	char *ptr2=&y;
	printf("%lf\n",x);//30.50
	printf(" %c\n",y);//A
	printf(" %lf\n",*ptr1);//30.500000
	printf(" %d\n",*ptr2);//65
}
