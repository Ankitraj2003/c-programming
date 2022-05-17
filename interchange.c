#include<stdio.h>
int main()
{
    int c,d,e;
    printf("Enter the value of C and D");
    scanf("%d %d",&c,&d);
    e = c;
    c = d;
    d = e;
    printf("New value of C and D is %d %d ",c,d);
    return 0;
}