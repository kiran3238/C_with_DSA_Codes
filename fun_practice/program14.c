

#include<stdio.h>
void arr1(int arr[] ,int arrsize){
	for(int i=0;i<arrsize;i++){

	printf("%d\n",*(arr+i));//*(arr+i)
	}

}
void main(){

	int arr[] ={10,20,30,40,50};

	int arrsize=sizeof(arr) / sizeof(int);
	arr1(arr,arrsize);
}
