/*1 2 3 4 
 * 25 36 49 64
 * 9 10 11 12
 * 169 196 225 256
 */
#include<stdio.h>
void main(){
	int rows;
	int x=1;

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=4;j++){
			if(i%2==1){
				printf("%d ",x);
				x++;
			}
			else{

				printf("%d ",x*x);
				x++;
			}
			
		}
			printf("\n");
	}
}
