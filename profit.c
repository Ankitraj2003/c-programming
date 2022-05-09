#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("entre the cp and sp of the product = ");
    scanf("%d%d",&cp,&sp);
    p = sp - cp ;
    l = cp - sp;
    if (p>0)
    {
        printf("the profit is %d",p);
    }
    if(l>0)
    {
        printf("the loss is %d",l);
    }
    if(p==0)
    {
        printf("there is no loss or profit");
    }
    return 0;
}