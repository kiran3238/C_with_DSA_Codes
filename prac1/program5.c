/* WAP takes a number 0 to 5 and print spelling if the number is greater than five print  print enter number is grater than 5 use switch case*/
#include<stdio.h>
void main(){
	int x;
	printf("Enter number: ");
	scanf("%d",&x);
	switch(x){
		case 0:
			printf("Zero\n");
			break;
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		default:
			printf("Enter value is greater than five\n");
	}
}
