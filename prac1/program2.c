/*WAP to find maximum number above three numbers*/
#include<stdio.h>
void main (){
	int a,b,c;
	printf ("Enter first numbers\n");
	scanf("%d",&a);

	printf ("Enter second numbers\n");
	scanf("%d",&b);
	printf ("Enter third numbers\n");
	scanf("%d ",&c);
	if (a>b&& a>c){
		printf("%d is maximum\n",a);

	        }

	else if (b>a && b>c){


		printf("%d is maximum\n",b);

	       }

	else{
		printf("%d is maximum\n",c);
		
	       }

}
