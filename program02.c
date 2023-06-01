#include<stdio.h>
void main(){
	int x=9;
	int ans,ans1,ans2,ans3;
	ans= ++x + x++ + ++x ;
	printf("%d\n",x);
	printf("%d\n",ans);

	ans1= ++x + ++x + ++x + ++x;
	printf("%d\n",x);
	printf("%d\n",ans1);
	
	ans2= x++ + x++ + ++x + x++ + ++x ;
	printf("%d\n",x);
	printf("%d\n",ans2);

	ans3= x++ + x++ + x++ + x++ ;
	printf("%d\n",x);
	printf("%d\n",ans3);
	
}
