/*05.  Write a program to find GCD _(HCF)_ of two numbers.

***Function Declarations***
```c
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);*/


#include <stdio.h>
#include <math.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main() {
    int a, b, gcd;
    a = input();
    b = input();
    gcd = find_gcd(a, b);
    output(a, b, gcd);
    return 0;
}

int input() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    return x;
}

int find_gcd(int a, int b) {
    int gcd = 1;

    for (int i = 1; i <= fmin(a, b); ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

void output(int a, int b, int gcd) {
    printf("GCD of %d and %d is: %d\n", a, b, gcd);
}
This uses the fmin function to find the minimum of a and b. Note that fmin requires the inclusion of the math.h header.




User
another operator for the ternary operator

ChatGPT
Certainly! In C, the ternary operator is a concise way to express a conditional statement. If you want an alternative to the ternary operator, you can use a simple if-else statement. Here's the modification to use if-else instead of the ternary operator in the find_gcd function:

c
Copy code
#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main() {
    int a, b, gcd;
    a = input();
    b = input();
    gcd = find_gcd(a, b);
    output(a, b, gcd);
    return 0;
}

int input() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    return x;
}

int find_gcd(int a, int b) {
    int gcd = 1;

    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }

    for (int i = 1; i <= min; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

void output(int a, int b, int gcd) {
    printf("GCD of %d and %d is: %d\n", a, b, gcd);
}