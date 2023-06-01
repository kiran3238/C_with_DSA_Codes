/* WAP  Take two character if these character are equal then  print them as it is but if they are unequal then print their difference
 * ip: va1:s   va2:s
 * op: va1=s    va2:s
 *
 * ip: va1:a   va2:2
 * op:   The difference between a  & p is 15*/
#include<stdio.h>
void main(){
	char va1;
	char va2;
	int diff;

	printf("Enter first variable\n");
	scanf("%c",&va1);

	printf("Enter second variable\n");
	scanf(" %c",&va2);
	if(va1==va2){
		printf("va1=%c  va2=%c",va1,va2);
	}
	else{
		diff= va2-va1;
		
		printf("The difference between%c and %c is %d :",va1,va2,diff);
	}
}
