/* WAP to print sum of first 10 odd numbers*/
#include<stdio.h>
void main(){
	int x,y;
	int sum=0;
	int i;
	printf("Enter first number\n");
	scanf("%d",&x);
	printf("Enter last number\n");
	scanf("%d",&y);

	for (i=x;i<=y;i++){
		if(i%2!=0){
			printf("%d\n",i);
			sum=sum+i;
		}
		
	}
	printf("The sum of odd number %d\n",sum);
}
