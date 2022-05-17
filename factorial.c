#include<stdio.h>
int main()
{
    int i,fact,n;
    i = 1;
    fact = 1;
    printf("enter the no = ");
    scanf("%d",&n);
    while (i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("factorial of the given no is = %d",fact);
    return 0;
}