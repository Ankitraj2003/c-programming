#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("Enter the value of all the angles = ");
    scanf("%d %d %d",&a1,&a2,&a3);
    sum = a1 + a2 + a3;
    if (sum==180)
    {
        printf("The triangle is valid.");
    }
    else
    printf("The triangle is invalid.");
    return 0;
}