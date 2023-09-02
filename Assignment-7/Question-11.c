//   11. Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a digit to find the postion of first i in LSB\n");
    scanf("%d",&x);
   
    while(x!=0)
    {
        count++;                     // count help to which digit number present first 1 in LSB
        if(x & 1==1)                 // bit wise operator used to convert decimal to binary number  and output gives 1
        {
            break;
        
        }
        else{
            x=x>>1;                  // if 1 not present in LSB then  right side to remove one bit use right shift operator 
        }

    }
   
    printf("first 1 from LSB is at %d\n\n",count);
}