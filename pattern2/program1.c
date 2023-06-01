/*  4 3 2 1
 *  5 4 3 2
 *  6 5 4 3
 *  7 6 5 4
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
			x--;

			
		}
		x=x+5;

	printf("\n");

	}
}
