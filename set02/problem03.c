/*03.  Write a program find whether a number is a composite number

> A Composite number has more than 2 factors.

***Function Declarations***
```c
int input_number();
int is_composite(int n);
void output(int n, int result);*/

#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n,result;
    n=input_number();
    result=is_composite();
    output(n,result);
}

int input_number()
{
    int x;                                      
    printf("Enter number:");
    scanf("%d",&x);
    return x;
}

int is_composite(int n)
{
    int count=0;
    
}