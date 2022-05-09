#include<stdio.h>
#include<math.h>
int main()
{
    float rad,degree;
    const float pi=3.14159;
    printf("Enter the value of angle=");
    scanf("%f",&degree);
    rad = degree * pi/180;
    printf("sin(%f) = %f \n",degree,sin(rad));
    printf("cos(%f) = %f \n",degree,cos(rad));
    printf("tan(%f) = %f \n",degree,tan(rad));
    printf("cosec(%f) = %f \n",degree,1/sin(rad));
    printf("sec(%f) = %f \n",degree,1/cos(rad));
    printf("cot(%f) = %f \n",degree,1/tan(rad));
    return 0;
}