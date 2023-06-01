/*WAP to take one value from the user in another function &print that value in main function*/

#include<stdio.h>

int fun()
{
	int x;
	printf("Enter the number \n");
	scanf("%d",&x);
	return x;
}
void main(){

	int num = fun();

	printf("Value enterd by the user is :%d\n",num);
}
