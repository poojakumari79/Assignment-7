// 7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int main()
{
    int i, num, count,a,b;
    printf("Enter a number which you want a prime number :");
    scanf("%d",&a);
    printf("Enter a number till where you want a prime number : ");
    scanf("%d",&b);
    
    // Checking for prime numbers
    for (num = a; num <= b; num++)
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
        }
    }
    return 0;
}
