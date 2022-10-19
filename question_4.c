#include<stdio.h>
main()
{
    float radius,area;
    printf("enter the radius\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("area of circle is %f having the radius %f ",area ,radius);
}