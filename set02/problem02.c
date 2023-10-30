/*02.  Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another

***Function Declarations***
```c
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
```*/
#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
}

int input_side()
{
    int x;
    printf("Enter side");
    scanf("%d",&x);
    return x;
}

int check_scalene(int a, int b, int c)
{
    int isscalene;
    if (a!=b && b!=c && a!=c)
    {
        isscalene=1;
    }
    else
    {
        isscalene=2;
    }
    return isscalene;
}

void output(int a, int b, int c, int isscalene)
{
    if (isscalene==1)
    {
        printf("the triange is scalene with sides being %d,%d and %d",a,b,c);
    }
    else if (isscalene==2)
    {
        printf("the triangle is not scalene with sides being %d,%d and %d",a,b,c);
    }
    else 
    {
        printf("invalid");
    }
}