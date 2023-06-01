/*
 i h g
 f e d
 c b a
 */
#include<stdio.h>
void main(){
	char ch ='i';

	for(int i=1; i<=3;i++){
		for(int j=1;j<=3;j++){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
}


