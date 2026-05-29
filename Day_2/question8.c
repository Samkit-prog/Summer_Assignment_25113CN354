#include<stdio.h>
int main()
{
    int n,d,rev=0;
    printf("enter the number");
    scanf("%d",&n);
   int num=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    } 
    if(num==rev)
    printf("it is a pallindrome number");
    else 
    printf(" it is not a pallindrome number");
return 0;
}

