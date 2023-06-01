/*A B C D
 * B C D E 
 * C D E F
 * D E F G
 */
#include<stdio.h>
void main(){
	int rows;
	char ch='A';


	printf("Enter the number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=4;j++){
			printf("%c ",ch);
			ch++;
		}
		ch=ch-3;
		printf("\n");
	}
}
