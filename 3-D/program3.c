/*Take 3d array in that 2planes are in that add 1st plane in 1st row & 2nd plane in 1st row addition*/

#include<stdio.h>
void main(){

	int plane,row,col;
	int sum=0;

	printf("Enter the number of planes rows &clo\n");
	scanf("%d%d%d",&plane,&row,&col);

	printf("Enter element of array\n");

	int arr[plane][row][col];
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){          
			for(int k=0;k<col;k++){
				if(j==0){
					sum=sum+arr[i][j][k];
				}
			}
		}
	}
	printf("Addition is %d:\n",sum);
}

