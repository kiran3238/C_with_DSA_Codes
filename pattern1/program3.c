/*1 1 1 1 
 *  2 2 2 2
 *  3 3 3 3
 *  4 4 4 4
 */
#include<stdio.h>
void main(){
	int rows;

	printf("Enter number of rows\n");
	scanf("%d",&rows);

        int x=1;
	for(int i=1;i<=rows;i++){
		

		for(int j=1;j<=4;j++){
			printf("%d ",x);
		}
		x++;
		printf("\n");
	}
}
