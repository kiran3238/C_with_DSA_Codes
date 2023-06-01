/* 1 2 3
 * a b c
 * 1 2 3
 * a b c
 */
#include<stdio.h>
void main(){
	int rows;

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int x=1;
		char ch='a';

		for(int j=1;j<=3;j++){
			if(i%2==1){
				printf("%d ",x);
				x++;
			}
			else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
