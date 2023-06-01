/*WAP to array element in reverse order take array size &array element from user*/

#include<stdio.h>
void main(){

	int size;

	printf("Enter the size of array\n");
	scanf("%d",&size);
        
	int arr[size];
	printf("Enter %d element of array\n",size);

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements in the array in reverse order\n");
	for(int i=size-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}



