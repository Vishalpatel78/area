#include<stdio.h>
void main()
{
    float r,area,circumference;
    printf("enter the radious of the circle");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("the area of the circle is %f",area);
    printf("\nthe circumference  of the circle is %f",circumference);
}