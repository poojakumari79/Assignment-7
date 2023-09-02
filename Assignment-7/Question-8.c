// 8. Write a program to find next Prime number of a given number

#include<stdio.h>

int main()
{
    int i, num, count,a;
    printf("Enter a number which you want a prime number :");
    scanf("%d",&a);
   
    // Checking for prime numbers
    for (num = a; num <=100; num++)
    {
        count = 0;
        for (i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        
        // Checking and Printing Prime Numbers
        if (count == 0 && num != 1)
        {
            printf("%d \n", num);
            break;
        }
    }
    return 0;
}
