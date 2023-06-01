/*$ = $ =
 * $ = $ =
 * $ = $ =
 * $ = $ =
 */
#include<stdio.h>
void main(){
	int rows;

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		char ch1='$';
		char ch2='=';
		for(int j=1;j<=4;j++){
			printf("%c %c ",ch1,ch2);
		}
		ch1++;
		ch2++;
		printf("\n");
	}
}
