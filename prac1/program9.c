/*WAP to print the count of divisors of the entered num.
 * ip: 16
 * op: divisors of 16 are
 * 1
 * 2
 * 4
 * 8
 */
#include<stdio.h>
void main()
{
	int num;
	int count=0;

	printf("\n Enter the number:");
	scanf("%d",&num);

	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
			count=count+1;
		}
	}
	printf("\n The total count is:%d",count);
}

