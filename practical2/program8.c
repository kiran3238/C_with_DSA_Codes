/*Take input from the user &n print the product of digit*/
#include<stdio.h>
void main(){
	int num,prod=1,rem;
	printf("Enter a number\n");
	scanf("%d",&num);

	while(num!=0){
		rem=num%10;
		prod=prod*rem;
		num=num/10;
	}
	printf("The product of digit is %d \n",prod);
}

