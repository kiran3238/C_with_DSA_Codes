
#include<stdio.h>
void funarr(int *arr){

	printf("%p\n",arr);

}
void main(){
	int arr1[]={10,20,30,40};

	funarr(arr1);//0 X 100

	funarr(&arr1[1]);//0 X 104
}
