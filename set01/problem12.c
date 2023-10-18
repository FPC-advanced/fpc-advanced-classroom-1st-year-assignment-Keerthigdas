/*Write a C program to find the sum of n complex numbers
Function Declarations

struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);*/

#include <stdio.h>

struct _complex
{
	float real, imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
	int n;
	Complex a,b,result;
	n=get_n();
	Complex c[n];
	result=add_n_complex(n,c);
	output(n,c,result);
	return 0;
}

int get_n()
{
	int n;
	printf("Enter the size of array");
}

void input_n_complex(int n, Complex c[n])
{
	int i;
	for (i=0; i<n; i++)
	{
	printf("Enter real no.");
	scanf("%f",&c[i].real);
	printf("Enter imaginary no.");
	scanf("%f",&c[i].imaginary);
	}
}

Complex add_n_complex(int n, Complex c[n])
{
	Complex x={0,0};
	int i;
	for (i=0; i<n; i++)
	{
		x.real=c[i].real+x.real;
		x.imaginary=c[i].imaginary+x.imaginary;
	}
	return x;
}

void output(int n, Complex c[n], Complex result)
{
	printf("The sum of %d complex number is %f + %f \n", n, result.real, result.imaginary);
}
