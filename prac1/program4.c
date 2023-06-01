/*WAP in which according to the month number print the number of days of that month*/
#include<stdio.h>
void main(){
	int num;
	printf("Enter number of Month\n");
	scanf("%d",&num);
	if(num==1){
		printf("in january 31 days\n");
	}
	else if (num==2){
         
		printf("in febuary 29/28 days\n");
	}
	else if(num==3){
		printf("in march 31 days\n");
	}
	else if (num==4){
		printf("in April 30 days\n");
	}
	else if (num==5){
		printf("in May 31 days\n");
	}
	else if (num==6){
		printf("in June 30 days\n");
	}
	else if (num==7){
		printf("in July 31 days\n");
	}
	else if (num==8){
		printf("in Augest 30 days\n");
	}
	else if (num==9){

		printf("in September 31 days\n");
	}else if( num==10){
		printf("in octomber 30 days\n");
	}else if (num==11){
	      printf("in febuary i29 diays\n");
	}
	else{
		printf("Enter correct Month\n");
	
	}
	
}
