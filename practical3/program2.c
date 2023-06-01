/* WAP to print thecharacter ASCII value is Even*/

#include<stdio.h>
void main(){
	int no,no1;
	printf("Enter Number \n");
	scanf(" %d",&no);
	printf("Enter End  Number \n");
	scanf(" %d",&no1);

	for(int i=no; i<=no1;i++){
		if(i%2==0){
			printf(" %c=%d\n",i,i);
		}
	}
 }
