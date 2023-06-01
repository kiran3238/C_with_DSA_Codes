/*WAP to print the square of odd number between a given tange from user 
 * input Enter start  10
          Enter End   20

	  output  121 169 225 289 361 


	  */

#include <stdio.h>

void main(){
	int start;
	int  end;

	printf("Enter start number \n");
	scanf("%d",&start);
	printf("Enter end number\n");
	scanf("%d",&end);

	for(int i=start ;i<=end;i++){
		if(i%2 !=0){
			printf("%d\t",i*i);
		}
	}
}
