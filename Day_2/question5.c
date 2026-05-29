#include<stdio.h>
int main()
{
    int n,sum=0,d;
    printf("enter the number ");
    scanf("%d",&n);
    int num=n;
    while(n>0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    printf(" sum of the digit of a number %d is %d",num,sum);
return 0;
} 