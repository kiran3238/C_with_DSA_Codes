/*WAP to print ASCII values from 0 to 127*/
#include <stdio.h>
void main(){
	int x;
	int y;
	printf("Enter first number\n");
	scanf("%d",&x);
	printf("Enter last number\n");
	scanf("%d",&y);

	for(int i=x;i<=y;i++){
		printf("%c=%d\n",i,i);
	}
}
