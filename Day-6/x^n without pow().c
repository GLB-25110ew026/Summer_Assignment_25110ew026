//WAP to find x^n without pow().
#include <stdio.h>
int main()
{
    int base,exponent;
    long long result=1;
    printf("Enter the base= ");
    scanf("%d",&base);
    printf("Enter the exponent= ");
    scanf("%d",&exponent);
    while(exponent>0)
    {
        result=result*base;
        --exponent;
    }
    printf("The output = %lld",result);
    return 0;
}