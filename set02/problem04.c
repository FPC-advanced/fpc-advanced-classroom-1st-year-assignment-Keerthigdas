/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

***Function Declarations***
```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);*/


#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int num);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n, sum;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}

int input_array_size()
{
    int x;
    printf("Enter array size: ");
    scanf("%d", &x);
    return x;
}


void input_array(int n, int a[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter array values: ");
        scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    /* [10,5,4,3,2] */
    int i;
    int sum=0;
    for (i=0; i<n; i++)
    {
        int j;
        int count=0;
        for (j=2; j<=a[i]; j++)
        {
            if (a[i]%j==0)
            {
                count = count+1;
            }
        }
        
        
        if (count>1)
        {
            sum=sum+a[i];
        }
    
    }

    return sum;


}

void output(int sum)
{
    printf("%d is the sum of all the composite numbers in the array\n", sum);
}
