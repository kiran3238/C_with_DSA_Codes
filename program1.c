#include <stdio.h>
void main(){
	int num;
	char chr;
	float rs;
	double crMoney;
	printf("enter the number =\n ");

	scanf("%d",&num);
	printf("enter the char =\n ");
	scanf(" %c",&chr);
	
	printf("enter the float =\n ");
	scanf("%f", &rs);

	printf("enter the double number =\n ");
	scanf("%lf/n", &crMoney);

	printf("size of int:%ld\n",sizeof(num));
	printf("size of char:%ld\n",sizeof(chr));
	printf("size of float:%ld\n",sizeof(rs));
	printf("size of double:%ld\n",sizeof(crMoney));
}

