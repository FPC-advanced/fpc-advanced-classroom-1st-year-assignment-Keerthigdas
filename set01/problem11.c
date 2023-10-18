/*Write a C program to find the sum of 2 complex numbers
Function Declarations

struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);*/

#include <stdio.h>

struct _complex
{
	float real;
	float imaginary;
};

typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
	Complex a,b,sum;
	a=input_complex();
	b=input_complex();
	sum=add_complex(a,b);
	output(a,b,sum);
}

Complex input_complex()
{
	Complex x;
	printf("Enter real no.");
	scanf("%f", &x.real);
	printf("enter img. no.");
	scanf("%f",&x.imaginary);
	return x;
}

Complex add_complex(Complex a,Complex b)
{
	Complex sum;
	sum.real=a.real+b.real;
	sum.imaginary=a.imaginary+b.imaginary;
	return sum;
}

void output(Complex a, Complex b, Complex sum)
{
	printf("sum of real no is %f\n",sum.real);
	printf("sum of imaginary no. is %f\n",sum.imaginary);
}