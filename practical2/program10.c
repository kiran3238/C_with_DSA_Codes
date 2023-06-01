#include<stdio.h>
void main(){
	int num;
	int a=0,b=1;
	int sum=0;
	printf("Enter number \n");
	scanf("%d",&num);
	printf("%d\t",a);
	printf("%d\t",b);

	while(sum<=num){
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
	}
}
