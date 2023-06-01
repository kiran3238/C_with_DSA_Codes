/*WAP to take the number input and print all the factors of that number*/

#include<stdio.h>
void main(){
	int no,i;
	printf("Enter the number\n");
	scanf("%d",&no);
	printf("Factors of %d are:\t",no);

	for(i=1 ; i<=no;i++){
		if(no%i==0){
			printf("%d\t",i);
		}
	}
}
