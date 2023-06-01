/*  = = = = 
 *  $ $ $ $ 
 *  = = = = 
 *  $ $ $ $
 */
#include<stdio.h>
void main(){
	int rows;

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=4;j++){
			if(i%2==1){
				printf("= ");
			}
			else{
				printf("$ ");
			}
		}
		printf("\n");
	}
}
