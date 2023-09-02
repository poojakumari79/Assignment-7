// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
	int flag=0,count,c=0,a=1,b=1,n;
	printf("Enter a number to check whether a given number is there in the fibonacci series or not :\n ");
	scanf("%d",&n);
	count=2;         // for 0th term fibonacci series number is 0.
    while(count<n)
	{
		c=a+b;
		count++;
		if(n==c)
	    flag =1;
		a=b;
		b=c;
		

	}
	if (flag==1)
	printf("yes present");
	else{
		printf("not present");
	}
	return 0;
}

