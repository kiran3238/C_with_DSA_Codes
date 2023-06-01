/*
 * WAP to print the number divisible by 3 & 7 between a given range start the range from rveverse
 Enter start 30
 enter end 80
 output 63 42 
 */

#include<stdio.h>
void main(){
	int start;
	int end;

	
	printf("enter start number\n");
	scanf("%d",&start);

	printf("Enter end number\n");
	scanf("%d",&end);

	for(int i=end; i>=start ;i--){
		if(i%3==0 && i%7==0){
			printf("%d\t",i);
		}
	}
}
