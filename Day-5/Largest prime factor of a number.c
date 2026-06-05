//WAP to find the largest prime factor of a number.
#include <stdio.h>
int main()
{
    long long n,temp,maxPrime,i;
    printf("Enter the positive number= ");
    scanf("%lld",&n);
    temp=n;
    while(n%2==0)
    {
        maxPrime=2;
        n=n/2;
    }
    for(i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            maxPrime=i;
            n=n/i;
        }
    }
    if (n>2)
    {
        maxPrime=n;
    }
    printf("The largest prime factor of the number %lld is %lld ",temp,maxPrime);
    return 0;
}