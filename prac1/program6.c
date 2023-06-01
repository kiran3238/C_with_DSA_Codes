/* WAP  to get 10 numbers from user & their sum and average*/
#include <stdio.h>
void main(){
	int num1;
	int sum=0;
	printf("Enter  number\n");
	scanf("%d",&num1);

	for(int i=1;i<=10;i++){
		sum=sum+i;
	}
	printf("sum is%d\n",sum);
	printf("Average is %d\n",sum/10);
}

