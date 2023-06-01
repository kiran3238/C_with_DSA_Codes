#include<stdio.h>

void funarr(int(*ptr)[4]){

	printf("%p\n",ptr);


}
void main(){
	int arr1[]={10,20,30,40};
	funarr(&arr1);
}
