/*D C B A
 * e d c b
 * F E D C 
 * g f e d 
 */
#include<stdio.h>
void main(){
	int rows;
	char ch1='D';
	char ch2='e';

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1; i<=rows;i++){
		for(int j=4;j>=1;j--){
			if(i%2==1){
				printf("%c ",ch1);
				ch1--;
			}
			else{
				printf("%c ",ch2);
				ch2--;
			}

		}
		if(i%2==1){
		ch1=ch1+6;
		}else{
		ch2=ch2+6;
		}
	        		
                printf("\n");
	}
}
