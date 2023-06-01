/*WAP to print all even number in reverse order & odd number is the standard way both saperarately with a rane
input :- start-2
End -9
output:- 
8 6 4 2
3  5 7 9*/
#include <stdio.h>
void main(){
	int start,End;
	printf("Enter start number \n");
	scanf("%d",&start);
	printf("Enter End number \n");
	scanf("%d",&End);

	for(int i=start;i<=End;i++)
	{
	
		if(i%2!=0){
		printf("%d\t",i);
		}
	}
	printf("\n");
	for(int i =End;i>=start;i--)
	{

		if(i%2==0)
		{
		printf("%d\t",i);
	}
	}
}
