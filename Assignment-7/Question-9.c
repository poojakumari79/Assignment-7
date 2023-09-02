// 9. Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
int main()
{
    int rem,n,sum=0,temp=0;        
    printf("enter a number  is an Armstrong number or not :");   // Armstrong if, the sum of the digits raised to the power n is equal to the number.
    scanf("%d",&n);
    temp=n;                        // store n value in temp variable because upon temp operation performed then the value of  temp is changed but n not changed
    while(temp>0)                      // temp>0 or temp!=0 both condtion satisfied
    {
    rem=temp%10;
    sum=sum+(rem*rem*rem);
    temp=temp/10;
    }
   if(sum==n)                  // if sum of cubic number is same to temp variable(starting variable) then it is armstrong number
   {
    printf("its a armstrong number");

   }
   else{
    printf("its not a armstrong number");
   }

}