/* take of rows from user 
 * rows=3
 *
 * *  *
 * *  *
 * *  *
 */

#include<stdio.h>
void main(){

	int rows;
	printf("Enter the number of rows\n");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows;i++){
		for(int j=1; j<=3;j++){
			printf("* ");
		}
		printf("\n");
	}
}


