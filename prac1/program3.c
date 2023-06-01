#include <stdio.h>
void main(){
	int a,b,c;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter second number\n");
	scanf("%d",&b);
	printf("Enter third number\n");
	scanf("%d",&c);

	if(a<b && a<c){
		printf("%d is Minimum number\n",a);
	}
	else if (b<a && b<c){
		printf("%d is minimum number\n",b);
	}
	else{
		printf("%d is minimum number\n",c);
	}
}
