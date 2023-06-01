/*WAP Take two character if these characters are equal then print the same but if they are unequal then print their difference*?
 */

#include<stdio.h> 
void main(){
	char firstc;
	char secondc;
	int diff=0;
	printf("Enter the first character\n");
	scanf("%c",&firstc);
	printf("Enter the Second character\n");
	scanf(" %c",&secondc);
	if(firstc==secondc){
		printf("The %c and %c are same\n",firstc,secondc);
	}else if(firstc !=secondc){
		if(firstc>secondc){
			diff=firstc-secondc;
			printf("The diff between %c and %c is %d",firstc,secondc,diff);
		}else if(firstc<secondc){
			diff=secondc-firstc;
			printf("The diff between %c and %c is %d",firstc,secondc,diff);
		}else{
			printf("not valid");
		}
	}
}
