/*WAP to print even no.1 to 100*/
#include <stdio.h>
void main(){
	int x;
	int y;
	printf("Enter a number\n");
	scanf("%d",&x);
	printf("Enter last number\n");
	scanf("%d",&y);

	for(int i=x;i<=y;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}
