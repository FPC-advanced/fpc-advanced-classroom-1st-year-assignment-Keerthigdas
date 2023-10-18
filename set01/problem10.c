/*Write a C program to compare two strings, character by character.
For example, Hello should be equal to Hello, but not equal to hello.

Hello will be lesser than Hellw (alphabetical order).*/

#include <stdio.h>

void input_str(char *str1, char *str2);
int str_compare(char *str1, char *str2);
void output(char *str1, char *str2, int flag);

int main()
{
    char str1[100], str2[100];
    input_str(str1, str2);
    int flag= str_compare(str1, str2);
    output(str1, str2, flag);
}

void input_str(char *str1, char *str2)
{
    printf("enter:");
    scanf("%s", str1);
    printf("enter:");
    scanf("%s",str2);
}

int str_compare(char *str1, char *str2)
{
    int flag;
    if (*str1>*str2)
    {
        flag=1;
    }
    else if (*str2>*str1)
    {
        flag=0;
    }
    else 
    {
        flag=2;
    }
}

void output(char *str1, char *str2, int flag)
{
    if (flag==1)
    {
        printf("\n %s is greater than %s /n",str1,str2);
    }
    else if (flag==0)
    {
        printf("\n %s and %s  are equal \n",str1,str2);
    }
    else
    {
        printf("\n %s lesser than %s /n", str1, str2);
    }
}

