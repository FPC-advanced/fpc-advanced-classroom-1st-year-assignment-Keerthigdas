/*Write a C program to find sum of all natural numbers until n
Function Declarations

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);*/

#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    int n=input_n();
    int sum= sum_n_nos(n);
    output(n,sum);
}

int input_n()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    return n;
}

int sum_n_nos(int n)
{
    int sum=0;
    int i;
    for (i=1; i<=n; i++)
    {
        sum= sum+1;
    }
    return sum; 
}

void output(int n, int sum)
{
    printf("the sum of first %d natural numbers is %d\n",n,sum);
}