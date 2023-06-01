/*3 2 1
  c b a
  3 2 1
  c b a
 */
#include<stdio.h>
void main(){
	int rows;

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
	int x=3;
	char ch='c';
		for(int j=3;j>=1;j--){
			if(i%2==0){
				printf("%c ",ch);
				ch--;
			}
			else{
				printf("%d ",x);
				x--;
			}
		}
		printf("\n");
	}
}
