/*WAP to print the product of the first 10numbers*/
#include <stdio.h>
void main(){
	int x,i;
		int prod=1;
	printf("Enter the first:\n");
	scanf("%d",&x);

	printf("The first 10 no from %d is:\n",x);

	for(i=x;i<=x+9;i++){
		printf("%d\n",i);
		prod=prod * i;
	}
	printf("The product of first 10 no from %d  is :%d\n",x,prod);
}
