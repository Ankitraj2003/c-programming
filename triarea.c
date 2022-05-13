#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,r,ar;
    printf("Entre the side of Triangle: \n");
    scanf("%f %f %f",&a,&b,&c);
    r = (a+b+c)/2 ;
    ar = sqrt(r*(r - a)*(r - b)*(r -c));
    printf("area of Triangle is:%f",ar);
    return 0 ;
}