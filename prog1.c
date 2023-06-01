#include<stdio.h>
void main()
{
	int a=10;
	int b;
	b=a++ + ++a;
	printf("\n%d \n%d \n%d \n%d",b,a++,a,++a);
}
