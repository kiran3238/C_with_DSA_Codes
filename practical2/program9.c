/*Take an input number from the user and print the number in reverse 
 * input: 1234
 * output: 4321
 */
#include <stdio.h> 
void main(){
	int num;
	int rem;
	int rev=0;

	printf("Enter number\n");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		rev= rev * 10+ rem;
		num=num/10;
	}
	        
		printf(" reverse number=%d\n",rev);
	
	
}
