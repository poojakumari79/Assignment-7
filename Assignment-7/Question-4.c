// 4. Write a program to calculate HCF of two numbers

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
			hcf=(x*y)/i;                // formula for hcf finding   (HCF*LCM=x*y or HCF=(x*y)/LCM)
            break;                     
		}
		
	}
    printf("HCF of %d and %d is %d",x,y,hcf);
	return 0;
}
