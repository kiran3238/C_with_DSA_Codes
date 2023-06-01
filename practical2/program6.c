/* Take  an input number from the user and count the no of digit using while loop 
 input=2534
 output= Number of digit in 2534 is 4*/
#include<stdio.h>
void main(){
	int num,i;
	int count =0;
	int rem;
	printf("Enter number\n");
	scanf("%d",&num);
	i=num;

	while(i>0){
		rem=i%10;
		count=count+1;
		i=i/10;
	}
	printf("Number of digits in %d is %d\n",num,count);
}



