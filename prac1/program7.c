/*WAP to check whether given input is a pythagorous triplet or not*/
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter Second number\n");
	scanf("%d",&b);
	printf("Enter Third number\n");
	scanf("%d",&c);
	if (c*c==a*a + b*b){
		printf("%d %d %dsatisfied for pythagorous triplet\n",a,b,c);
	}
	else{
		printf("%d %d %d not satisfied for pythagorous triplet\n",a,b,c);
	}
}

