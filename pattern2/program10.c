/* D4 C3 B2 A1
 * A1 B2 C3 D4
 * D4 C3 B2 A1
 * A1 B2 C3 D4
 */

#include<stdio.h>
void main(){
	int rows;
	char ch1='D';
	char ch2='A';
	int x=4;
	int y=1;

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(i%2==1){
				printf("%c%d\t",ch1,x);
			}
			else{
				printf("%c%d\t",ch2,y);
			}
		}
		printf("\n");
	}
}
