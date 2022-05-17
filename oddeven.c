#include<stdio.h>
int main()
{
    int a;
    printf("Entre any positive integer =  ");
    scanf("%d",&a);
    if (a % 2==0)
    {
        printf("the given no is even");
    }
    else
    {
        printf("the given no is odd");
    }
    return 0;
}