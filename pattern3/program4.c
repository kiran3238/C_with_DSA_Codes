/*
  a B c D
  b C d E
  c D e F
  d E f G
  */
#include<stdio.h>
void main(){
	int row;
	char ch1='a';
	char ch2='A';
	printf ("enter number of rows\n");
	scanf("%d ",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=4;j++){
			if(j%2!=0){
				printf("%c ",ch1);
			}
			else{
				printf("%c ",ch2);
			}
			ch1++;
			ch2++;
		}
		ch1=ch1-3;
		ch2=ch2-3;
		printf("\n");
	}
}

