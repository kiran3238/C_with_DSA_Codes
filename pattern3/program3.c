/*
  4 a 3 b
  4 a 3 b
  4 a 3 b
  4 a 3 b
  */
#include<stdio.h>
void main(){
	int row;
	printf("Enter number of row\n");
	scanf("%d",&row);

	for(int i=1; i<=row;i++){

		int x=4;
		char ch='a';
		for(int j=1;j<=4;j++){
			if(j%2!=0){
				printf("%d ",x);
				x--;
			}
			else{
				printf("%c ",ch);
				ch++;
			}
			
		
		}
		printf("\n");
	}
}

	
	
			

