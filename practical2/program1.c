/*WAP to find the sum of number that are not divisible by 3 upto to given number 
Input:-10
output:- sum of number not divisible by 3 is 37*/
#include <stdio.h>
void main(){
	int num;
	int sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(i %3!=0){
			sum=sum+i;
		}
		
	}
		printf("Sum of number not divisible by 3 is %d",sum);
}
