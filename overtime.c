#include<stdio.h>
int main()
{
    int hour,i=1;
    float otpay;
    while (i<=5)
    {
        printf("total hour worked by an emp = ");
        scanf("%d",&hour);
        if (hour>40)
        {
            otpay = (hour - 40)*12;
            printf("over time pay = %f \n",otpay);
        }
        else
        {
            printf("over time pay = 0 \n");
        }
        i++;
    }
    return 0;
}

