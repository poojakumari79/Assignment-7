// 5. Write a program to check whether two given numbers are co-prime numbers or not.

#include<stdio.h>
int main()
{
	int x,y,i,hcf;
	printf("Enter a two number x and y to calculate HCF :\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<=x*y;i++)
	{
		if((i%x==0)&&(i%y==0))
		{
			hcf=(x*y)/i;                // formula for hcf finding
            break;                     
		}
		
	}
    if(hcf==1)                         // for co-prime hcf=1 (only one higest common factor)
    {
    printf("yes it is co-prime");
    }
    else{
        printf("Its not a co-prime");
    }
	return 0;
}
