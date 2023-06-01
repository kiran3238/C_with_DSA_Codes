/*
      a c e
      g i k 
      m o q
      */


#include <stdio.h>
void main(){
	int ch='a';

	for (int i=1; i<=3;i++){
		for ( int j=1; j<=3; j++){
			printf("%C ",ch);
			ch=ch+2; /*ch++ ch++*/
		}
		printf("\n");
	}
}
