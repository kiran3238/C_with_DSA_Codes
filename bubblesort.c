#include<stdio.h>

void main()
{
	int arr[]={4,1,-2,3,7,5,6};
	int size = sizeof(arr)/sizeof(int);
	int temp;

	for(int i=0;i<=size-1;i++)
	{
		for(int j=1;j<=size-1;j++)
		{
			if(arr[i]<arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
	}

	printf("sorted array is\n");

	for(int i=0;i<=size-1;i++)
	{
		printf("%d\n",arr[i]);
	}

}

