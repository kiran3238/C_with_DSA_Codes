/*WAP to print first 10 Capital letters*/
#include <stdio.h>
void main(){
	char chr;
	printf("Enter alphabet\n");
	scanf(" %c",&chr);
	printf("Enter 10 alphabet\n");
	for(int i=chr;i<=chr+10 ;i++){
	
		printf(" %c\n",i);
	}

}
