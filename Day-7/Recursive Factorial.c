//WAP for Recursive Factorial.
#include <stdio.h>
long long factorial(int n);
int main()
{
    int n;
    printf("Enter a positive number= ");
    scanf("%d",&n);
    printf("The factorial of the number %d is %lld.",n,factorial(n));
    return 0;
}
long long factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}