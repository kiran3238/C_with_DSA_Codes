/* WAP ato see a given number is a multiple of 3*/

#include<stdio.h>
void main(){
	int x;
	printf("Enter a number\n");
	scanf("%d ",&x);
        
	if(x>0){
		if(x%3==0){
			printf("%d Number is multiple of 3\n",x);
		}else{
			
			printf("%d Number is Not multiple of 3\n",x);
		}
	}else{
		printf("%d is negative number\n",x);
	}
}	
