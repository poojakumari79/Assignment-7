// 10. Write a program to print all Armstrong numbers under 1000


#include<stdio.h>
int main()
{
    int rem,n,sum,temp;
    printf("All armstrong number between 1 to 1000 :\n" );
    for(n=1;n<=1000;n++)
    {
        sum=0;
        temp=n;
    while(temp>0)                    
    {
    rem=temp%10;
    sum=sum+(rem*rem*rem);
    temp=temp/10;
    }
   if(sum==n)                 
   {
    printf(" %d\n",n);

   }
    }
    return 0;

}