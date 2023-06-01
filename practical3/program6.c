/*WAP to caculate the factorial of the given number*/


#include<stdio.h>
void main(){
	int value;
	printf("Enter the value\n");
	scanf("%d",&value);
	int count=1;
	if(value==0){
		printf("zero factorial value equal to 1\n");
	}else if(value>0){
		for(int i=value;i>=1;i--){
			printf("%d ",i);
			count=count*i;
		}
	}else{
		printf("value has undefined value\n");
		count=0;
	}
	printf("\n");
	printf("Calculation %d factorial is=%d\n",value,count);
}
				

