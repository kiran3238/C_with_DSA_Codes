/* WAP to find the sum of numbers that are divisible by 5 in range */

#include <stdio.h>
void main(){
	int Sno,Eno,sum=0;
	printf("Enter start no\n");
	scanf("%d",&Sno);
	printf("Enter End no\n");
	scanf("%d",&Eno);

	for(int i=Sno; i<=Eno; i++){
		if(i%5==0){
			sum=sum+i;
		
		}
		
	
	}
	printf(" Sum of Number:%d \n",sum);
}
