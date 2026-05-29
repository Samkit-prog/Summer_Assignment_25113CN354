#include<stdio.h>
int main()
{
    int n,pro=1,d;
    printf("enter the number ");
    scanf("%d",&n);
    int num=n;
    while(n>0)
    {
        d=n%10;
        pro*=d;
        n=n/10;
    }
    printf(" product of the digit of a number %d is %d",num,pro);
return 0;
} 