//WAP to write function to find factorial.
#include <stdio.h>
long long fact(int n);
int main()
{
    int n;
    long long factorial;
    printf("Enter the positive number= ");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The factorial of the number %d is %lld.",n,factorial);
    return 0;
}
long long fact(int n)
{   
    int i;
    long long fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}