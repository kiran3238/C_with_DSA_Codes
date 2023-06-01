#include<stdio.h>

int diaArr1(int (*ptr)[3] , int arrsize){
	int sum=0;

	for(int i=0;i<arrsize;i=+4){
		sum= sum + *(*ptr+i);
		//i=i+4;
	}
	return sum;
}

void main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	int arrsize =sizeof (arr) /sizeof(int);

	int sumDia =diaArr1(arr,arrsize);
	printf("The sum of diagonal Element is=%d\n",sumDia);
}
