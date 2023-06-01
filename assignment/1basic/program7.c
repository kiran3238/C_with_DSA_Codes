/*WAP to print table 12*/
#include <stdio.h>
void main(){
	int Tnum;
	printf("Enter table number\n");
	scanf("%d",&Tnum);

	for (int i=1;i<=10;i++){
		printf("%d* %d =%d \n",Tnum,i,Tnum*i);
	}
}
