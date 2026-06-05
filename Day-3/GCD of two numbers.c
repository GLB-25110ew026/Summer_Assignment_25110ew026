//WAP to find GCD of two numbers.
#include <stdio.h>
int main()
{
    int a,b,i,GCD;
    printf("Enter the first number= ");
    scanf("%d",&a);
    printf("Enter the second number= ");
    scanf("%d",&b);
    for(i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
            GCD=i;
    }
    printf("GCD of the two numbers %d and %d is %d.",a,b,GCD);
    return 0;
}