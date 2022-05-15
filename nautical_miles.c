#include<stdio.h>
#include<math.h>

int main()
{
    float l1,l2,g1,g2,degree;
    float D;
    const float pi = 3.171592;
    
    printf("Enter the value of l1,l2,g1,g2 = ");
    scanf("%f %f %f %f",&l1,&l2,&g1,&g2);

    l1 = l1*(pi/180);
    l2 = l2*(pi/180);
    g1 = g1*(pi/180);
    g2 = g2*(pi/180);

    D = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    
    printf("%0.2f",D);
    return 0;
}