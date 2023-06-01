/* WAP to take an array from the user in the main function & print that array in the another function take the array size from user*/


#include<stdio.h>
void display (int *ptr, int x){
	printf("Array elements are:\n");

	for(int i=0;i<x ;i++){
		printf("%d\n",*(ptr+i));
	}
}

void main(){

	int size;

	printf("Enter size of an array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array elements\n");
	for(int i=0; i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	display(arr,size);
}

