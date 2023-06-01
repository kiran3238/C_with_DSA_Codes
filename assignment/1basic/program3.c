/*WAP to print the first ten 3 digit number*/
#include <stdio.h>
void main(){
		int num,i;
		printf("Enter 3 digit number\n");
		scanf("%d",&num);
		if(num>99&&num<1000)
		{
			for(int i=0; i<=10 ;i++){
		
			              printf("%d\n",num);
				      num++;
		}
		}
		else{
				printf("Enter correct no\n");
		}
	}



