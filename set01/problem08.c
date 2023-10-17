/*Write a C program to find sum of n different numbers entered by the user.
Function Declarations

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);*/

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main()
{
    int n= input_array_size();
    int arr[n];
    input_array(n,arr);
    int sum=sum_n_array(n,arr);
    output(n,arr,sum);
    return 0;
}

int input_array_size()
{
    int x;
    printf("Enter the size of array");
    scanf("%d",&x);
    return x;
}

void input_array(int n, int a[n])
{
    int i;
    for (i=0; i<=n; i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

int sum_n_array(int n, int a[n])
{
    int sum=0;
    int i;
    for (i=0; i<n; i++)
    {
        sum+= a[i];
    }
    return sum;
}

void output(int n, int a[n], int sum)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (i!=0)
        {
            printf("+");
        }
        printf("%d", a[i]);
    }
    printf("is %d", sum);
}