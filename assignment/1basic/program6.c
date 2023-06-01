/*WAP to print reverse from 100-1*/
# include <stdio.h>
void main(){
	int x,y;
	printf("Enter  first number \n");
	scanf("%d",&x);
	printf("Enter second number\n");
	scanf("%d",&y);

	for (int i=x; i>=y;i--){
		printf("%d\n",i);
	}
}
