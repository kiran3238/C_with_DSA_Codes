/*WAP a program to print the addition of 1 to 10 with 10 to 1
 output:- 1+10=11
 2+9=11
 3+8=11
 ...
 10+1=11*/
#include <stdio.h>
void main(){
	int add=0;
	int j=10;
	for(int i=1; i<=10;i++){
		add=i+j;
		printf("%d+%d=%d\n",i,j,add);
		j--;
	}
}
		
