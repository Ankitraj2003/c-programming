#include<stdio.h>
int main ()
{
    int a;
    float b;
    printf("Enter the amount of object which is you purchase = ");
    scanf("%d",&a);
    if(a<1000)
    {
        printf("you are not eligible for offer 'sorry'. ");
    }
    else if (a<2000)
    {
        b = a*0.1 ;
        printf("congratulations you are eligible for offer and you got 10%% off,and your offer price is %f",b);
    }
    else
    {
        b = a*0.1 ;
        printf("congratulations you are eligible for offer and you got 50%% off , and your offer price is %f",b);
    }
    return 0;
}