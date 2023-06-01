/*0 3 8
 * 15 24 35
 * 48 63 80
 */
#include<stdio.h>

void main(){
	int rows;
	int x=3;
	int sum=0;

	printf("\nEnter no. of rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",sum);
			sum=sum+x;
			x=x+2;

		}
		
	
		printf("\n");
	}
}

