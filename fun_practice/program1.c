
#include<stdio.h>

void fun (int x){
	printf("%d\n",x);
}
void main(){
	fun('A');//65

	fun(10);//10

	fun(20.5f);//20

	fun(35.50);//35
}
