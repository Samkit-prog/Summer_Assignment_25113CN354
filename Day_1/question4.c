#include <stdio.h>

int main() {
    int n,d;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        d=n%10;
        count++;
        n=n/10;

    }
    
    printf("Number of digits = %d\n", count);
    return 0;
}