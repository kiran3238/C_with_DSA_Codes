/*WAP to find the given element from the array take array size & array elements from users */

#include<stdio.h>
void main(){
	int size;
	

	printf("Enter the size of array\n");
	scanf("%d",&size);

	int arr[size];

	printf("enter elements in the array\n");

	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	int search;

	printf("enter the elements to be search\n");
	scanf("%d",&search);

	int flag =0;
	int i=0;

	for(;i<size;i++)
	{
		if(search==arr[i])
		{
			flag=1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("%d is found in array at %d position\n",search,i);
	}
	else
	{
		printf("%d is not found in array ",search);

	}

	
}
