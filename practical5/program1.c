/*
  1 2 3 4
  2 3 4 5
  3 4 5 6
  4 5 6 7
  */
#include<stdio.h>
void main(){
	int x=1;
	for( int i=1 ; i<=4;i++){
		for(int j=1; j<=4;j++){
			printf("%d ",x);
			j=j-2;
		}
		printf("\n");
	}
}
				
