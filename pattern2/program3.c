/* 4 4 4 4
 * 3 3 3 3
 * 2 2 2 2
 * 1 1 1 1 
 */
#include<stdio.h>
void main(){
	int rows;
  
       int x=4;
	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

		for(int j=4;j>=1;j--){
		           printf("%d ",x);
			   
		
		}
	
		x--;
		printf("\n");
	}
}
