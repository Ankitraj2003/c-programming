#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the value of x and y = ");
    scanf("%d %d",&x,&y);
    if (x==0 && y==0)
    {
        printf("The given point lies on origin.");
    }
    if (x==0 && y!=0)
    {
        printf("The point lies on y-axis.");
    }
    if (x!=0 && y==0)
    {
        printf("The point lies on x-axis.");
    }
    if (x!=0 && y!=0)
    {
        printf("The point lies on Plane.");
    }
    return 0;
}