/*WAP a program to take a number as input & print whether that is a prime number or not
  {Note: prime number is one which is divisible by 1 & that number only}
input:-41
output:-
41 is prime number */
#include<stdio.h>
void main(){
	int num;
	int count =0;
	printf("Enter number\n");
	scanf("%d",&num);

	for (int i=2; i<=num;i++)
	{
		if(num%i==0){
			count=count+1;
		}
	}
		if (count>2){
			printf("%d is not prime number\n",num);
		}
		else{
			printf("%d is prime number\n",num);
		}
	
}

