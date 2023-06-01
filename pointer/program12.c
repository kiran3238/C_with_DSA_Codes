#include<stdio.h>
void main(){
	int arr[]={10,20,30,40,50};

	int *ptr=&arr[1];

	printf("%d\n",*ptr);//20
	printf("%d\n",*(ptr+2));//40
}

