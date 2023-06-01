/*WAP to PRINT FIRST 100 Number*/

#include <stdio.h>
void main(){
	int x;
	printf("Enter first 100 number\n");
	scanf("%d",&x);

	for (int i=x;i<=x+99;i++){
		printf("%d\n",i);
	}
}

