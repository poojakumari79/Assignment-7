// 1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
	int i,c=0,a=0,b=1,n;
	printf("Enter a nth term to print fibonnaci series number: ");
	scanf("%d",&n);

	for(i=2;i<=n;i++)            // for 0th term fibonnaci series number is 0.
	{
		c=a+b;
		a=b;
		b=c;
	
	}
	printf("the %dth fibonacci number is %d",n,b);
	return 0;
}

