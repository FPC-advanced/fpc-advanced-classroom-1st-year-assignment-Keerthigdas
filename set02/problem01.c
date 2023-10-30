/*01.  Write a program to find the area of a triangle.

***Function Declarations***
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area); */

#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    float base, height, area;
    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);
}

void input(float *base, float *height)
{
    printf("Enter base");
    scanf("%f",base);
    printf("Enter height");
    scanf("%f",height);
}

void find_area(float base, float height, float *area)
{
    *area=(base*height)/2;
}

void output(float base, float height, float area)
{
    printf("the area of %f and %f is %f",base, height, area);
}