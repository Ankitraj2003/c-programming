#include<stdio.h>
#include<math.h>

int main()
{
    float v,t,wcf;

    printf("Enter the value of v and t = ");
    scanf("%f %f",&v,&t);

    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
    printf("%0.2f",wcf);
    return 0;
}