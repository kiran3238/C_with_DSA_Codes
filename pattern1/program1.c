/*1 2 3 4 
 * 2 3 4 5 
 * 3 4 5 6
 * 4 5 6 7
 */

#include<stdio.h>
void main(){
	int rows;
	int x=1;

	printf("Enter the number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=4;j++){
			printf("%d ",x);
			x++;
		}
		x=x-3;
		printf("\n");
	}
}
