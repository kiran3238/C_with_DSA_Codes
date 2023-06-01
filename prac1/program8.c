/* WAP print takes angle of tringle from the user and print whether that tringle is valid or not */
#include<stdio.h>
void main(){
	int a,b,c;

	printf("Enter first angle\n");
	scanf("%d",&a);
	printf("Enter second angle\n");
	scanf("%d",&b);
	printf("Enter third angle\n");
	scanf("%d",&c);
	if(a+b+c==180){
		printf("The triangle with angles %d %d&%d is valid \n",a,b,c);
	}
	else{
		printf("The triangle with angles %d %d & %d is not valid \n",a,b,c);
	}
}


