#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,c;
    printf("enter the value of x1,x2,x3,y1,y2,y3 = ");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
    c=x2*y3-x1*y3-x2*y1+x1*y1-x3*y2+x1*y2+x3*y1-x1*y1;
    printf("%d",c);
    if (c==0)
    {
        printf("given three point lies on a line");
    }
    else
    {
        printf("all the given point not lies on same line");
    }
    return 0;
}