/*Take input number from the user ane print the sum of digit
 * input=1234
 * output=10*/
#include<stdio.h>
void main(){
	int num,rem,sum=0;
	printf("Enter number \n");
	scanf("%d",&num);

	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of digit of number is %d ",sum);
}
