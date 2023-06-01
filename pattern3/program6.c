/*
   = = = = = = 
   $ $ $ $ $ $
   @ @ @ @ @ @
   = = = = = = 
   $ $ $ $ $ $ 
   @ @ @ @ @ @
   */

#include<stdio.h>
void main(){
	int rows;

	printf("Enter number of rows:\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		
		for(int j=1; j<=6;j++){
			if(i%3==1){
				printf("= ");
			}
			else if (i%3==2){
				printf("$ ");
			}
			else{
				printf("@ ");
			}
		}
	        printf("\n");
	}
	
}

