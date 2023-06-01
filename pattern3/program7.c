/*
   1 4 27
   4 27 16
   27 16 125
   */
#include<stdio.h>
void main(){
	int x=1;
	int rows;

	printf("Enter number of rows:\n");
	scanf("%d",&rows);

	for (int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			if(x%2==0){
				printf("%d ",x*x);
			}
			else{
				printf("%d ",x*x*x);
			
			}
			x++;
		}
		x=x-2;
	        printf("\n");
	}
	

}

