/*
    16 15 14 13 
    L   K  J  I
    8  7   6   5
    D  C  B  A
    */
#include<stdio.h>
void main(){
	int rows;
	int x=16;
	char ch='P';
	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1; i<=rows;i++){
		for(int j=1; j<=4;j++){
			if(i%2!=0){
				printf("%d\t ",x);
			}
			else{
				printf(" %c\t",ch);
		
			}
			x--;
			ch--;
		}
		printf("\n");
	}
}


