/* WAP to print all even number in reverse order & odd number in standard way.Both separately .with a range*/

#include<stdio.h>
void main(){
	int start;
	int end;
	printf("Enter number\n");
	scanf("%d",&start);
	printf("Enter End number\n");
	scanf("%d",&end);
	for(int i=end; i>=start;i--){
	
		if(i %2==0){
			printf ("%d \t",i);
		}
	}
	printf("\n");
	for(int i=start;i<=end;i++){
			if(i%2!=0){
			printf("%d\t",i);
			
		}
	
	}
}
