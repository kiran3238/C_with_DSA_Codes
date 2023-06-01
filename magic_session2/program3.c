/*WAP to add two diffrent array of same size take from user*/

#include<stdio.h>
void main(){
	int size;

	printf("Enter the size of array\n");
	scanf("%d",&size);
	
	int arr1[size],arr2[size],arr3[size];

	printf("Enter the element of array:\n");
       
	for(int i=0;i<size ;i++){
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<size ;i++){
        	scanf("%d",&arr2[i]);
	
	}
	printf("addittion of two array is:\n");
        for(int i=0;i<size;i++){

		arr3[i] =arr1[i] + arr2[i];
                
	        printf("%d\n",arr3[i]);
		}
}	
				
