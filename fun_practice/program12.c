//Passing Array to a function

#include<stdio.h>

void printEle(int ele){

	printf("%d\n",ele);

}
void main(){

	int arr[]={10,20,30,40,50};

	int arrsize=sizeof(arr) /sizeof (int);

	for(int i=0;i<arrsize;i++){

		printEle(arr[i]);
	}
}
