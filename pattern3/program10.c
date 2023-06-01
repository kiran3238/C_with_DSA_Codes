/*
   D1 C2 B3 A4
   e5 f4 g3 h2
   F3 E4 D5 C6
   g7 h6 i5 j4
   */

#include<stdio.h>
void main(){
	int rows;
	int x=1;
	int y=5;
	char ch1='E';
	char ch2='e';

	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		if(i%2!=0){
		for(int j=1;j<=4;j++){
			ch1--;
			printf("%c%d\t",ch1,x);
			x++;
		}
		x=x-2;
		ch1=ch1+6;
		}else{
			for(int j=1;j<=4;j++){
				printf("%c%d\t",ch2,y);
				ch2++;
				y--;
			}
			y=y+6;
			ch2=ch2-2;
		}
		printf("\n");
	}
}
			

