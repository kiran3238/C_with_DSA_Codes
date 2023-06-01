/*  WAP to count the even &odd number take array size from user*/

#include<stdio.h>
void main(){
	int size;
	int count1=0;
	int count2=0;

	printf("Enter the size of the array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the element of array:\n");

	for (int i=0; i<size ;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			count1++;
		}
		else{
			count2++;
		}
	}
	printf("The count of Even number %d\n",count1);
	printf("The count of odd number %d\n",count2);
}



