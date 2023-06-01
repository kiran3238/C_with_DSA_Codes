/*  I H G
 *  F E D 
 *  C B A
 */
#include<stdio.h>
void main(){
	int rows;
	char ch='I';

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=3;j>=1;j--){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
}
