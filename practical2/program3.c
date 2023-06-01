/* WAP to print the divisors & count of divisor of the entred num.
input:- 15
output:-the divisor is 1 3 5 15
The count od divisors is 4
Addition of divisors 24*/
#include<stdio.h>
void main(){
	int num,count=0,sum=0;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("The divisor is\n");
	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("%d\t",i);
		
			count=count+1;
			sum=sum+i;
		}
	}
			printf("The count of divisor is %d\n",count);
		
			printf("The Addition  of divisor is %d\n",sum);
	
}

