/* WAP to print the number in the given range & their muitiplective inverse suppose x is number then its multicative inverse or reciprocal is 1/x
 * the expected output is 1-5
 1=1
 1=1/2=0.5
 .
 .
 5=0.20;
 */
#include <stdio.h>
void main(){
	int start;
	int end;
	float value;
	printf("Enter the start\n");
	scanf("%d",&start);
	printf("Enter the end\n");
	scanf("%d",&end);

	for(int i=start;i<=end;i++){
			float(value)=(float)1/i;
			printf("%d=%0.2lf\n",i,value);
	}
}
			

