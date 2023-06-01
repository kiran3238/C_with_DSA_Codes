/*WAP to check whether the input is leap year or not */
#include <stdio.h>
void main (){
	int year;
	printf("Enter a year\n");
	scanf("%d",&year);

	if (year%4==0){
		printf("year is leap year\n");
	}
	else
	{
		printf("year is not leap year\n");
	}
}
