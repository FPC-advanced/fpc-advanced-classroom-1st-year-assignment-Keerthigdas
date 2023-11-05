/*05.  Write a program to find GCD _(HCF)_ of two numbers.

***Function Declarations***
```c
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);*/

//

/* GCD (a, b) = (a × b)/ LCM (a, b)*/

#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd_sum=find_gcd(a,b);
    output(a, b, gcd);
}

int input()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
}

