/*4. Write a C program to add two numbers using **pass by reference**

***Function Declarations***

```c
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);*/

#include <stdio.h>

void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,sum);
    output(a,b,sum);    
}

void input(int *a, int *b)
{
    printf("Enter two numbers: ");
    scanf("%d",a);
    printf("Enter two numbers: ");
    scanf("%d",b);
}

void add(int a, int b, int *sum)
{
    *sum=a+b;
}

void output(int a, int b, int sum)
{
    printf("Sum of %d and %d is %d\n",a,b,sum);
}