#include<stdio.h>
void main(){
	char ch1='x';
	char ch2='y';

	char *ptr=&ch1;

	printf("%p\n",ptr);
	printf("%c\n",*ptr);

//	printf("%p\n",(ptr+1.5));//error:invalid operand int* & *double
//	printf("%c\n",(ptr+1.5));//error same //not addition of pointer & float double.

	printf("%c\n",*(ptr+1));
	printf("%d\n",*(ptr+2));
}

