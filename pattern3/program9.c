/*
   0 1 1 2
   3 5 8 13 
   21 34 55 89 
   144 233 377 610
   */

#include<stdio.h>
void main(){
	int rows;
	int a=0;
	int b=1;
	int c=0;

	printf("Enter number of rows\n");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=4;j++)
		{
			printf("%d\t ",c);
			a=b;
			b=c;
			c=a+b;
		}

	        printf("\n");
	}
	
}


