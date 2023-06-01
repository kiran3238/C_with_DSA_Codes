#include<stdio.h>
void main(){
	char x;
	printf("enter alphabets in btween A&E\n");
	scanf("%d" ,& x);
	switch(x){
default:
		printf("wrong input\n");
		break;
case 'A':
		printf("ONE\n");
		break;
case 'B':
		printf("TWO\n");
		break;
case 'C':
		printf("THREE\n");
		break;
case 'D':
		printf("FOUR\n");
		break;
case 'E':
		printf("FIVE\n");
		break;
	}
}
	

