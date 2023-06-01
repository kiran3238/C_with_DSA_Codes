/*
  1 4 3
  16 5 36
  7 64 9*/

#include<stdio.h>
void main(){
	int x=1;
	int rows;

	printf("Enter number of rows:\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			if(i%2!=0){
				if(j%2==0){
					printf("%d ",x*x);
				}
				else{
					printf("%d ",x);
				}
			}else{
				if(j%2==0){
					printf("%d ",x);
				}
				else{
					printf("%d ",x*x);
				}
			}
			x++;
		}
		printf("\n");
	}
}



