#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,R;
    int x1,y1;
    float D;
    printf("Enter the value of x and y, which is random point = ");
    scanf("%d %d",&x,&y);

    printf("Enter the value of X1 and x2, which is center of the circle = ");
    scanf("%d %d",&x1,&y1);

    printf("Enter the value of R for the circle = ");
    scanf("%d",&R);

    D = sqrt(pow(x1-x, 2)+ pow(y1-y, 2));
    
    if (D==R)
    {
        printf("The given point lies on the circle.");
    }
    if (D>R)
    {
        printf("The given point lies outside the circle.");
    }
    if (D<R)
    {
        printf("The given point lies inside the circle.");
    }
    return 0;
}