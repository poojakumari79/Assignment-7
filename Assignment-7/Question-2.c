// 2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main()
{
	int count,c=0,a=1,b=1,n;
	printf("Enter a number to print fibonnaci series : ");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);

	count=2;         // for 0th term fibonacci series number is 0.
    while(count<n)
	{
		c=a+b;
		count++;
		printf("%d\n",c);
		a=b;
		b=c;

	}
		
	
	return 0;
}
