#include<stdio.h>
int main()
{
    int no;
    printf("Enter any negetive number = ");
    scanf("%d",&no);
    if (no<0)
    {
        no = no*-1;
        printf("The absolute value is %d",no);
    }
    else
    {
        printf("Enter value is not negetive");
    }
    return 0;
}