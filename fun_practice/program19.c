/*WAP to take a value from theuser in main function & print that value in another function*/

#include<stdio.h>

void  display (int *x)
{
	printf("The number entered by user:%d\n",*x);
}
void main(){
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	display(&x);
}

	
	
