/*WAP to print a program of 11 in reverse order*/
#include<stdio.h>
void main(){
	int Tnum;
	printf("Enter reverse Table number\n");
	scanf("%d",&Tnum);

	for(int i=10; i>=1;i--){
		printf("%d*%d=%d\n",Tnum,i,Tnum*i);
	}
}
